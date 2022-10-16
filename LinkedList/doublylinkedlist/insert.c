#include <stdio.h>
#include <stdlib.h>

/*
2.11 Insertion in Doubly linked list(beginning, end, specific position)
Maintain both the head pointer when creating doubly linked list
2.12 Deletion from doubly linked list (beginning, end, specific position)
*/
struct Node{
    int data;
    struct Node *previous;
    struct Node *next;
};
struct Node *head, *tail, *temp;
int count;

void main (){
    createDoublyLL();
    //insertatBeg();
    //insertatEnd();
    insertAtPos();
    //insertAfterPos();
}

void createDoublyLL(){
    struct Node *newNode;
    int i = 0;

    printf("Enter data:\n");
    while (i < 3)
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));        
        scanf("%d", &newNode->data);
        newNode->next = newNode->previous = 0;
        
        if (head == 0)
        {
            head = tail = newNode;
        }
        else{
            tail->next = newNode;
            newNode->previous = tail;
            tail=newNode;
        }
        i++;
    }

    printNode();
}
    
void insertatBeg(){
    printf("Start: insertatBeg \n");
    
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    
    printf("Enter Node data \n");
    scanf("%d", &newNode->data);
    &newNode->next = &newNode->previous = 0;

    head->previous = newNode;
    newNode->next = head;
    head = newNode;

    printNode();
    printf("Ends: insertatBeg \n");
}

void insertatEnd(){
    printf("Start: insertatEnd \n");
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    
    printf("Enter data for end node \n");
    scanf("%d", &newNode->data);
    newNode->next = newNode->previous = 0;

    tail-> next = newNode;
    newNode->previous = tail;
    tail = newNode;

    printf("End: insertatEnd \n");
}

void insertAtPos(){
    printf("Start: insertAtPos \n");
    int position, i = 1;
    printf("Position: \n");
    scanf("%d", &position);

    if (position < 1 && position > (count+1))
    {
        printf("Invalid position selected");
    }
    else if (position == 1)
    {
        insertatBeg();
    }
    else{
        temp = head;
        struct Node *newNode;
        newNode = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter data:");
        scanf("%d", &newNode->data);
        newNode->next = newNode->previous = 0;

        while (i < (position -1))
        {
           temp = temp->next;
           i++;
        }

        newNode->next = temp->next;
        temp->next = newNode;
        newNode->previous = temp;
        //Multiple arrow node access/setup  
        newNode->next->previous = newNode;
    }
    printNode();
    printf("End: insertAtPos \n");
}

void insertAfterPos(){
    printf("Start: insertAfterPos \n");
    int position, i = 1;
    printf("Enter the position to insert the node");
    scanf("%d", &position);
    if (position < 1 && position > 4)
    {
        printf("Invalid position selected");
    }
    else{
        temp = head;
        struct Node *newNode;
        newNode = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter data:");
        scanf("%d", &newNode->data);
        newNode->next = newNode->previous = 0;

        while (i < (position))
        {
           temp = temp->next;
           i++;
        }

        newNode->next = temp->next;
        temp->next = newNode;
        newNode->previous = temp;
        //Multiple arrow node access/setup  
        newNode->next->previous = newNode;
    }
    printf("End: insertAfterPos \n");
}

printNode(){
    printf("Begin printNode \n");

    struct Node *temp = head;
    while (temp != 0)
    {
        count++;
        printf("%d \n", temp->data);
        temp = temp->next;
        /* code */
    }

    printf("End printNode \n");
}