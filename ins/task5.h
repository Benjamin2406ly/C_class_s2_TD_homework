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

#endif