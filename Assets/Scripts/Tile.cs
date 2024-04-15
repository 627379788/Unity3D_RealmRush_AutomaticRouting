using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tile : MonoBehaviour
{
  [SerializeField] Tower tower;
  [SerializeField] bool isPlacebled = false;

  GridManager gridManager;
  Pathfinder pathfinder;
  Vector2Int coordinate = new Vector2Int();
  public bool IsPlacebled{ get {return isPlacebled;}}

  void Awake() {
    gridManager = FindObjectOfType<GridManager>();
    pathfinder = FindObjectOfType<Pathfinder>();
  }
  void Start() {
    if (gridManager != null) {
      coordinate = gridManager.GetCoordinatesFromPosition(transform.position);
      if (!isPlacebled) gridManager.BlockNode(coordinate);
    }
  }
  void OnMouseDown(){
    if(gridManager.GetNode(coordinate).isWalkable && !pathfinder.WillBlockPath(coordinate)) {
      bool isSuccessful = tower.CreatTower(tower, transform.position);
      if (isSuccessful) {
        gridManager.BlockNode(coordinate);
        pathfinder.NotifyReceivers();
      }
    }
  }
}
