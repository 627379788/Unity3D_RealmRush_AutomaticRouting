using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Pathfinder : MonoBehaviour
{
    [SerializeField] Vector2Int startCoordinates;
    public Vector2Int StartCoordinates { get { return startCoordinates;}}
    [SerializeField] Vector2Int destinationCoordinates;
    public Vector2Int DestinationCoordinates { get { return destinationCoordinates;}}

    Node startNode;
    Node destinationNode;
    Node currentSearchNode;

    Queue<Node> frontier = new Queue<Node>();
    Dictionary<Vector2Int, Node> reached = new Dictionary<Vector2Int, Node>();
    Vector2Int[] directions = { Vector2Int.right, Vector2Int.left, Vector2Int.up, Vector2Int.down};
    GridManager gridManager;
    Dictionary<Vector2Int, Node> grid = new Dictionary<Vector2Int, Node>();

    void Awake() {
        gridManager = FindObjectOfType<GridManager>();
        if(gridManager != null) {
            grid = gridManager.Grid;
            startNode = gridManager.GetNode(startCoordinates);
            destinationNode = gridManager.GetNode(destinationCoordinates); 
        }
    }
    void Start()
    {
        GetNewPath();
    }
    public List<Node> GetNewPath() {
        return GetNewPath(startCoordinates);
    }

    public List<Node> GetNewPath(Vector2Int coordinates) {
        gridManager.RestNodes();
        BreadthFirstSearch(coordinates);
        return BuildPath();
    }

    void ExploreNeighbors()
    {
        List<Node> neighbors = new List<Node>();
        foreach(Vector2Int v2 in directions) { 
            Vector2Int nextVector = currentSearchNode.coordinates + v2;
            if(grid.ContainsKey(nextVector) && !neighbors.Contains(grid[nextVector])) {
                neighbors.Add(grid[nextVector]);
            }
        }
        foreach(Node neighbor in neighbors) {
            if(!reached.ContainsKey(neighbor.coordinates) && neighbor.isWalkable) {
                neighbor.connectedTo = currentSearchNode;
                frontier.Enqueue(neighbor);
                reached.Add(neighbor.coordinates, neighbor);
            }
        }
    }

    void BreadthFirstSearch(Vector2Int coordinates) {
        startNode.isWalkable = true;
        destinationNode.isWalkable = true;
        frontier.Clear();
        reached.Clear();

        bool isRunning = true;
        frontier.Enqueue(grid[coordinates]);
        reached.Add(coordinates, grid[coordinates]);
        while(frontier.Count > 0 && isRunning) {
            currentSearchNode = frontier.Dequeue();
            currentSearchNode.isExplored = true;
            ExploreNeighbors();
            if(currentSearchNode.coordinates == destinationCoordinates) {
                isRunning = false;
            }
        }
    }

    List<Node> BuildPath() {
        List<Node> path = new List<Node>();
        Node currentNode = destinationNode;
        while(currentNode.connectedTo != null) {
            path.Add(currentNode);
            currentNode.isPath = true;
            currentNode = currentNode.connectedTo;
        }
        path.Add(currentNode);
        currentNode.isPath = true;
        path.Reverse();
        return path;
    }
    public bool WillBlockPath(Vector2Int coordinates) {
        if(grid.ContainsKey(coordinates)) {
            bool previousState = grid[coordinates].isWalkable;
            grid[coordinates].isWalkable = false;
            List<Node> newPath = GetNewPath();
            grid[coordinates].isWalkable = previousState;

            if(newPath.Count <= 1) {
                GetNewPath();
                return true;
            }
        }
        return false;
    }
    public void NotifyReceivers() {
        BroadcastMessage("RecalculatePath", false, SendMessageOptions.DontRequireReceiver);
    }
}
