using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System;

[ExecuteAlways]
[RequireComponent(typeof(TextMeshPro))]
public class CoordinateLabeler : MonoBehaviour
{
    [SerializeField] Color defaultColor = Color.white;
    [SerializeField] Color blockedColor = Color.gray;
    [SerializeField] Color exporedColor = Color.yellow;
    [SerializeField] Color pathColor = Color.red;
    TextMeshPro label;
    Vector2Int coordinates = new Vector2Int();
    GridManager gridManager;

    void Awake(){
        label = GetComponent<TextMeshPro>();
        gridManager = FindObjectOfType<GridManager>();
        label.enabled = true;
        DisplayCoordinates();
    }

    void Update()
    {
        if (!Application.isBatchMode) {
            DisplayCoordinates();
            UpdateObjectName();
        }
        SetLabelColor();
        ToggleLabels();
    }

    void ToggleLabels() {
        if(Input.GetKeyDown(KeyCode.C)) {
            label.enabled = !label.IsActive();
        }
    }

    void SetLabelColor()
    {
        if (gridManager == null) return;
        Node node = gridManager.GetNode(coordinates);
        if (node == null) return;
        if(!node.isWalkable) {
            label.color = blockedColor;
        }else if(node.isPath) {
            label.color = pathColor;
        }else if(node.isExplored) {
            label.color = exporedColor;
        }else {
            label.color = defaultColor;
        }
    }

    void UpdateObjectName()
    {
        transform.parent.name = coordinates.ToString();
    }

    void DisplayCoordinates()
    {
        if (gridManager == null) return;
        coordinates.x = Mathf.RoundToInt(transform.parent.position.x / gridManager.WorldGridSize);
        coordinates.y = Mathf.RoundToInt(transform.parent.position.z / gridManager.WorldGridSize);
        label.text = coordinates.x + "," + coordinates.y;
    }
}
