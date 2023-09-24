#include <C:\vscode\C_class_s2_TD_homework\ins\task5.h>

/*
**创建一个储存1到Count的循环链表
*/
void circu_linked_list(int Count){
    head = _Node(1);
    current = head;

    for(int i;i<=Count;i++){
        current->next = _Node(i);
        current = current->next;
    }
    
    current->next = head;            //链表闭合
};

int josephus(int Count, int Coff){
    circu_linked_list(Count);

    struct Node* prev =NULL;         //prev表示前一个节点
    current = head;                  //将指针指向链表头部

    while(current->next!=current){   //如果current->next=current说明只剩一个data，循环结束
        for(;Coff>1;Coff--){         //跳过Coff-1个节点
            prev = current;
            current = current->next;
        }
        prev->next = current->next   //prev和prev->next间隔了Coff-1个节点
    }

    current->next = prev->next;
    struct Node*temp = current;      //备份，因为直接free掉current或current->next来断链有问题
    current = current->next;
    free(temp);                      //释放内存

    int final = current->data;
    free(current);                   //释放内存，结束链表
    return final;    
}
