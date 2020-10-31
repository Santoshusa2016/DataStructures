#include <stdio.h> 
#include <stdlib.h> 

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head, *temp;

void createlist(){
    struct Node *newNode;
    int choice=0;

    //Create a linked list
    while (choice < 5)
    {
        printf("Choice is: %d\n", choice);
        //Allocate node in the heap memory
        newNode = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter data:\n");
        scanf("%d", &newNode->data);
        newNode->next=0;

        if (head==0)
        {
            head = temp = newNode;
        }
        else{
            //Link the nodes together
            temp->next=newNode;
            temp = newNode;
        }
        choice++; 
    }

}

void displaylist(){
    temp = head;
    printf("Data Entered is:\n");
    while (temp != 0)
    {
        printf("%d:\n", temp->data);
        temp = temp->next;      
    }
}

void insertAtBeginning(){
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the data you want to store\n");
    scanf("%d", &newNode->data);
    newNode->next = head->next;
    head = newNode;
}

/* Counts no. of nodes in linked list */
int getCount() 
{ 
    int count = 0;  // Initialize count 
    struct Node *current = head;  // Initialize current 

    if (current == 0)
    {
        count = 0;
    }
    else
    {
        while (current != 0) 
        { 
            count++; 
            current = current->next; 
        } 
    }
    printf("Length of Linkedlist is:%d\n", count);
    return count; 
} 

void insertAfterPos(){
    int pos,i=1;
    struct Node *newNode, *temp = head;
    
    printf("Enter the position after which you want to insert\n");
    scanf("%d", &pos);

    //Check if pos is greater than count
    if (pos < 1 && pos > getCount(head) + 1)
    {
        printf("Invalid Position");
    }
    else{
        while (i < pos)
        {
            temp = temp->next;
            i++;
        }
        
        newNode = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter the data you want to store\n");
        scanf("%d", &newNode->data);
        newNode->next = temp->next;
        temp->next = newNode;

    }
}

void insertAtEnd(){
    struct Node *newNode, *temp;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the data you want to store\n");
    scanf("%d", &newNode->data);
    newNode->next = 0;
    
    //Iterate over all the items in list
    temp = head;
    while (temp->next != 0)
    {
        printf("%d:\n", temp->data);
        temp = temp->next;      
    }
    temp->next = newNode;   
}

void deleteAtBeginning(){
    if (head == 0)
    {
        printf("Head is Empty");
    }
    else{
        struct Node *temp;
        temp = head;
        head=temp->next;
        free(temp); //gc
    }
}

void deleteAtEnd(){
    struct Node *previous;
    temp = head;

    while (temp->next != 0)
    {
        previous = temp;
        temp = temp->next;
        /* code */
    }
    previous->next = 0;previous->next = NULL;
    free(temp);
}

void deleteFromPosition(){
    struct Node *nextPos;
    int pos, i = 1;
    temp = head;
    while (i < pos -1)//Since here we will access next node
    {
         temp = temp->next;
         i++;
    }
    nextPos = temp ->next;
    temp->next = nextPos->next;
    free(nextPos);
}

int main()
{
    head = 0;
    createlist();
    displaylist();
    reverse();
    displaylist();
}

reverse(){
    struct Node *currentNode, *nextNode, *previousNode;
    previousNode = 0;
    currentNode = nextNode = head;

    while (nextNode != 0)
    {
        nextNode = currentNode->next;
        currentNode->next = previousNode;
        previousNode = currentNode;
        currentNode = nextNode;
    }
    head = previousNode;
    
}