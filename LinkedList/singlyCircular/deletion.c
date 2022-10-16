#include <stdio.h>
#include <stdlib.h>

/*
2.18 Circular linked list deletion
*/
struct Node {
    int data;
    struct Node *next;
}*tail;


struct Node *newNode;

createLinkedList(){
    int choice = 0;
    while (choice < 3)
    {
        choice ++;
        newNode = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter data\n");
        scanf("%d", &newNode->data);
        if (tail == 0)
        {
            tail = newNode;
            tail->next = newNode;
        }
        else
        {
            newNode->next = tail->next;
            tail->next = newNode;
            tail = newNode;   
        }
    }
}

void deleteFromBeg(){
    struct Node *temp = tail->next;
    if (tail == 0)
    {
        printf("List is empty \n");
    }
    else if (temp == tail || temp->next == temp) //There is only one node
    {
        tail = 0;
        free(temp);
    }
    else{
        tail->next =temp->next;
        free(temp);
    }
}   

void deleteFromEnd(){
    struct Node *current, *previous;
    current = previous = tail->next;

    if (tail == 0)
    {
        printf("List is empty \n");
    }
    else if (current->next == current) //There is only one node
    {
        tail =0;
        free(current);
    }
    else{
       while (current->next != tail->next)
       {
           previous = current;
           current = current->next;
       }
       previous->next = current->next;
       tail = previous;
       free(current);
    }
}

void deleteFromPos(){
    struct Node *currentNode, *nextNode;
    int pos, i = 1, l;
    currentNode = tail->next;
    printf("Enter Position \n");
    scanf("%d", &pos);
    l = 4;

    if (pos < 1 || pos > l)
    {
        printf("INVALID Position \n");\
    }
    else{
        while (i < pos-1)
        {
            currentNode = currentNode->next;
            i++;
        }
        nextNode = currentNode->next;
        currentNode->next = nextNode->next;
        free(nextNode);
    }
    
}

int getLength(){

}