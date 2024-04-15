using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;

public class Tower : MonoBehaviour
{
    [SerializeField] int cost = 75;
    [SerializeField] float delayTime = 1f;
    void Start() {
        StartCoroutine(Build());
    }

    IEnumerator Build()
    {
        foreach(Transform child in transform) {
            child.gameObject.SetActive(false);
            foreach(Transform grandchild in child) {
                grandchild.gameObject.SetActive(false);
            }
        }

        foreach(Transform child in transform) {
            child.gameObject.SetActive(true);
            yield return new WaitForSeconds(delayTime);
            foreach(Transform grandchild in child) {
                grandchild.gameObject.SetActive(true);
            }
        }
    }

    public bool CreatTower(Tower tower, Vector3 position) {
        Bank bank = FindObjectOfType<Bank>();
        if(bank == null || bank.CurrentBalance < cost) {
            return false;
        }
        bank.WithDraw(cost);
        Instantiate(tower.gameObject, position, Quaternion.identity);
        return true;
    }
}
