#include <stdio.h>
#include <stdlib.h>

/*
2.14 Circular linked list in data structure
2.15 Implementation of circular linked list
When creating a circular linked list we can create a tail pointer.
In tail pointer the next will always contain the head pointers address
*/
struct Node{
    int data;
    struct Node *next;
};
struct Node *tail;

int main(){
    createCircularLL();
}

void createCircularLL(){
    int choice=1;
    while (choice)
    {
        struct Node *newNode;
        newNode = (struct Node *)malloc(sizeof(struct Node));

        printf("Enter data\n");
        scanf("%d", &newNode->data);
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
    struct Node *temp;
    if (tail == 0)
    {
        /* code */
    }
    else{       
        //tail->next always points to head in case of tail only pointer   
        temp = tail->next;
        do
        {
            printf("%d", temp->data);
            temp = temp->next;
        } while (temp != tail->next);
        
    }
    
 
    
}