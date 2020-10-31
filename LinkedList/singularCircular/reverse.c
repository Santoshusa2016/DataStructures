#include <stdio.h>
#include <stdlib.h>

/*
2.18 Reverse of circular linked list
*/

struct Node
{
    int data;
    struct Node *next;
}*tail;

createNode(){

}

void reverse(){
    struct Node *current, *next, *previous;
    current= tail->next;
    next = current->next;

    if (tail == 0)
    {
        printf("List is empty");
    }
    else if (tail == current){
        printf("there is only one node in the list");
    }
    else{
        while (current != tail)
        {
            previous = current;
            current = next;
            next = current->next;
            current->next = previous;
        }

        next->next = tail;
        tail = next;        
    }
    
}


