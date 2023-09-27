#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdio.h>

/*
**链表结构体
**Node1--next-->Node2--next-->Node3...
*/
typedef struct Node {
    int data;
    struct Node* next;
} Node;

int josephus_linkedlist(int Count, int Coff);
int josephus_std(int n);

#endif