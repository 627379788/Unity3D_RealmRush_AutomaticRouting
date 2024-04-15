using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GridManager : MonoBehaviour
{
    [SerializeField] Vector2Int gridSize;
    Dictionary<Vector2Int, Node> grid = new Dictionary<Vector2Int, Node>();
    [Tooltip("与unity单元格大小一致")]
    [SerializeField] int worldGridSize = 10;
    public int WorldGridSize { get { return worldGridSize;}}
    public Dictionary<Vector2Int, Node> Grid{get{return grid;}}

    void Awake() {
        CreateGrid();
    }
    
    public void BlockNode(Vector2Int coordinate) {
        if(grid.ContainsKey(coordinate)) {
            grid[coordinate].isWalkable = false;
        }
    }
    public void RestNodes() {
        foreach(KeyValuePair<Vector2Int, Node> kv in grid) {
            kv.Value.connectedTo = null;
            kv.Value.isExplored = false;
            kv.Value.isPath = false;
        }
    }
    public Vector2Int GetCoordinatesFromPosition(Vector3 position) {
        Vector2Int coordinate = new Vector2Int();
        coordinate.x = Mathf.RoundToInt(position.x / worldGridSize);
        coordinate.y = Mathf.RoundToInt(position.z / worldGridSize);
        return coordinate;
    }

    public Vector3 GetPositionFromCoordinates(Vector2Int coordinates) {
        Vector3 position = new Vector3();
        position.x = coordinates.x * worldGridSize;
        position.z = coordinates.y * worldGridSize;
        return position;
    }

    public Node GetNode(Vector2Int coordinates) {
        if(grid.ContainsKey(coordinates)) {
            return grid[coordinates];
        }
        return null;
    }

    void CreateGrid()
    {
        for(int x = 0; x < gridSize.x; x++) {
            for(int y = 0; y < gridSize.y; y++) {
                Vector2Int coordinates = new Vector2Int(x, y);
                string name = $"({x}, {y})";
                if(GameObject.Find(name) == null) continue;
                grid.Add(coordinates, new Node(coordinates, true));
            }
        }
    }

}
