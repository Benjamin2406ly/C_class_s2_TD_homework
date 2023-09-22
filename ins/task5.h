#include <stdio.h>
#include <stdlib.h>

/*
**链表结构体
**|data|null|--|data|null|--|data|null|...
*/
typedef struct Node {
    int data;
    struct Node* next;
} Node;

/*
**构造一个结构体实例_Node
**用结构体字面量初始化其成员变量
*/
Node* _Node(int data) {
    return &(Node){.data = data, .next = NULL};
}

/*
**构造Josephus问题主函数
**Count表示人数，Coff(count off)报数的数
*/
int josephus(int Count, int Coff);

/*
**创建循环链表
*/
void circu_linked_list()