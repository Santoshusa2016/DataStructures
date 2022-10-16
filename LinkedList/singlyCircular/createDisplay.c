#include <stdio.h>
#include <stdlib.h>

/*
2.14 Circular linked list in data structure
2.15 Implementation of circular linked list
When creating a circular linked list we can maintain a tail pointer.
In tail pointer the next will always contain the head pointers address
*/
typedef struct Node{
    int data;
    struct Node *next;
}Node;

Node *tail;

void create(){
    int choice = 1;
    while (choice)
    {
        Node *newNode;
        newNode = (Node *)malloc(sizeof(Node));

        printf("Enter data\n");
        scanf("%d", &newNode->data);
        newNode->next = 0;
        if (tail == 0)
        {
            tail= newNode;
            tail->next = newNode;
        }
        else{
            newNode->next = tail->next;
            tail->next = newNode;
            tail = newNode;          
        }
        
        printf("Do you want to continue ?\n");
        scanf("%d", &choice);
    }   
    
}

void display(){
    Node *temp;
    if (tail == 0)
    {
        printf("List is empty \n");
    }
    else{       
        //tail->next always points to head in case of tail only pointer   
        temp = tail->next;
        do
        {
            printf("%d \n", temp->data);
            temp = temp->next;
        } while (temp != tail->next);   
    }
}

int main(){
    create();
    display();
}
