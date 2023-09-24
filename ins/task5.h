#include <stdio.h>
#include <stdlib.h>

/*
**链表结构体
**|data|null(next)|-->|data|null(next)|-->|data|null(next)|...
*/
typedef struct Node {
    int data;
    struct Node* next;
} Node;

/*
**构造一个结构体实例_Node
**用结构体字面量初始化其成员变量
*/
struct Node* _Node(int data) {
    return &(Node){.data = data, .next = NULL};
}

struct Node*head;
struct Node*current;

/*
**构造Josephus问题主函数
**Count表示人数，Coff(count off)报数的数
*/
int josephus(){};

/*
**创建循环链表
*/
void circu_linked_list();