#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *previous;
    struct Node *next;
};

struct Node *head, *temp;

void Create(){
    struct Node *newNode;
    int choice = 1;

    while (choice)
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));
        //Malloc will return pointer to the 1 byte of the element

        printf("Enter the element");
        scanf("%d", &newNode->data);
        (*newNode).previous = (*newNode).next = 0;

        if (head == 0)
        {
            head = temp = newNode;
        }
        else
        {
            temp->next = newNode;
            newNode->previous = temp;
            temp = newNode;
        }

        printf("Do you want to continue ?\n");
        scanf("%d", &choice);
    }
    
}

void display(){
    temp = head;
    while (temp != 0)
    {
        printf("%d", temp ->data);
        temp = temp->next;
    }
    
}