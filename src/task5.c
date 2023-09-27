#include "task5.h"
#include <stdlib.h>

/*
**构造一个结构体实例_Node
**用结构体字面量初始化其成员变量
*/
Node* _Node(int data) {
    return &(Node){.data = data, .next = NULL};
}
Node* head;
Node* current;

/*
**创建一个储存1到Count的循环链表
*/
void circu_linked_list(int Count){
    head = _Node(1);
    current = head;

    for(int i=1;i<=Count;i++){
        current->next = _Node(i);
        current = current->next;
    }
    
    current->next = head;            //链表闭合
};

int josephus_linkedlist(int Count, int Coff){
    if (Count < 1 || Coff < 1) {
        return -1;                   // 无效的输入
    }

    circu_linked_list(Count);

    struct Node* prev =NULL;         //prev表示前一个节点
    current = head;                  //将指针指向链表头部

    while(current->next!=current){   //如果current->next=current说明只剩一个data，循环结束
        for(int i=1;i<Coff;i++){         //跳过Coff-1个节点
            prev = current;
            current = current->next;
        }
        prev->next = current->next;   //prev和prev->next间隔了Coff-1个节点

        struct Node*temp = current;      //备份，因为直接free掉current或current->next来断链有问题
        current = current->next;
        free(temp);                      //释放内存
    }

    int final = current->data;
    free(current);                   //释放内存，结束链表
    return final;    
}

#ifndef STDMETHOD
#define STDMETHOD

#include <stdio.h>

int josephus_std(int n) {
    int pre_winner = 0;              
    int count;
    for (count = 2; count <= n; count++) {
        pre_winner = (pre_winner + 2) % count;
    }
    return pre_winner;
}

#endif