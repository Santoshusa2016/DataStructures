#include <stdio.h>
#include <stdlib.h>

/*
2.15 Circular linked list in data structure
2.16 Circular linked list-Insertion

*/
struct Node{
    int data;
    struct Node *next;
};
struct Node *head, *temp, *tail;

int main(){
    create();
    insertAtBeg();
    insertAtEnd();
    display();
}

void create(){
    int choice=1;
    head = 0;

    while (choice)
    {
        struct Node *newNode;
        newNode = (struct Node *)malloc(sizeof(struct Node));

        printf("Enter data\n");
        scanf("%d", &newNode->data);
        if (head == 0)
        {
            head = temp= tail = newNode;
        }
        else{
            temp->next = newNode;
            temp = newNode;
        }
        temp->next = head;
        tail = temp;

        printf("Do you want to continue ?\n");
        scanf("%d", &choice);
    }   
    
}

void display(){
    if (head == 0)
    {
        printf("List is empty \n");
    }
    else{
        temp = head;
        while (temp->next != head) //print till the node-> next is not head
        {
            printf("%d \n", temp->data);
            temp = temp->next;  
        }
        printf("%d \n", temp -> data); //Since we stop at node which has head
    }    
}

void insertAtBeg(){
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter Data \n");
    scanf("%d", &newNode->data);

    if (tail == 0)
    {   
        tail = newNode;
        newNode->next = newNode;
    }
    else{
        newNode->next = tail->next;
        tail->next = newNode;
        head = newNode;
    }  
}

void insertAtEnd(){
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter Data \n");
    scanf("%d", &newNode->data);

    if (tail == 0)
    {   
        tail = newNode;
        newNode->next = newNode;
    }
    else{
        newNode->next = tail->next;
        tail->next = newNode;
        tail = newNode;
    }
    printf("%d \n",tail->next->data);    
}

void insertAtPos(){
    struct Node *newNode;
    int pos, len, i;

    if (pos < 0 && pos > len)
    {
        printf("Invalid Position \n");
    }
    else if (pos == 1){
        insertAtBeg();
    }
    else
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter Data \n");
        scanf("%d", &newNode->data);

        temp = tail->next;
        while (i < pos-1)
        {
            temp = temp->next;
            i++;
        }
        newNode->next = temp->next;
        temp->next = newNode;
        
    }
    printf("%d \n",tail->next->data);    
}

int getLength(){
    return 4;
}