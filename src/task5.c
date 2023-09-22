#include <task5.h>

void circu_linked_list(int Count){
    struct Node*head = _Node(1);
    struct Node*current = head;

    for(int i;i<=Count;i++){
        current->next = _Node(i);
        current = current->next;
    }
    
    current->next = head;          //链表闭合
}

int josephus(int Count, int Coff){

}
