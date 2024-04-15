using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Enemy))]
public class EnemyMove : MonoBehaviour
{
    [SerializeField] [Range(0f, 5f)] float speed = 1f;
    List<Node> paths = new List<Node>();
    Enemy enemy;
    Pathfinder pathfinder;
    GridManager gridManager;
    void OnEnable()
    {
        ReturnToStart();
        RecalculatePath(true);
    }
    
    void Awake() {
        enemy = GetComponent<Enemy>();
        pathfinder = FindObjectOfType<Pathfinder>();
        gridManager = FindObjectOfType<GridManager>();
    }

    void RecalculatePath(bool isLive) {
        Vector2Int coordinates = new Vector2Int();
        coordinates = isLive ? pathfinder.StartCoordinates : gridManager.GetCoordinatesFromPosition(transform.position);
        StopAllCoroutines();
        paths.Clear();
        paths = pathfinder.GetNewPath(coordinates);
        StartCoroutine(FollowPath());
    }

    void ReturnToStart() {
        transform.position = gridManager.GetPositionFromCoordinates(pathfinder.StartCoordinates);
    }

    IEnumerator FollowPath()
    {
        for(int i = 1; i < paths.Count; i++) {
            Vector3 startPosition = transform.position;
            Vector3 endPosition = gridManager.GetPositionFromCoordinates(paths[i].coordinates);
            float travelPercent = 0f;
            transform.LookAt(endPosition);
            while(travelPercent < 1) {
                travelPercent += Time.deltaTime * speed;
                transform.position = Vector3.Lerp(startPosition, endPosition, travelPercent);
                yield return new WaitForEndOfFrame();
            }
        }
        FinishPath();
    }

    void FinishPath() {
        enemy.StealGold();
        gameObject.SetActive(false);
    }
}
