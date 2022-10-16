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

void display(){
    struct Node *temp;
    temp = tail->next;
    do
    {
        printf("%d", &tail->data);
        tail = tail->next;
    } while (temp != tail -> next);
    
}

void createNode(){
    int choice = 0;
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));

    while (choice <= 4)
    {
        scanf("Please enter data %d:", &newNode->data);
        if (tail == 0)
        {
            tail = newNode;
            tail -> next = tail;
        }
        else
        {
            newNode->next = tail->next;
            tail->next = newNode;
            tail = newNode;
        }    
        choice++;
    }
    
    //printf("Call from createNode: Normal Order \n");
    display();
}

void reverseNode(){
    struct Node *current, *next, *previous;
    current = next = tail->next;
    previous = tail;

    if (tail == 0)
    {
        printf("List is empty");
    }
    else if (tail == current){
        printf("there is only one node in the list");
    }
    else{
        while (current != tail->next)
        {
            next = current->next;
            current->next = previous;
            previous = current;
            current = next;
        }
        tail = next;
    }
    printf("Call from reverseNode: Reverse Order \n");
    display();
}

int main(){
    createNode();
    // reverseNode();
}

