#ifndef linkedlist_h
#define linkedlist_h

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