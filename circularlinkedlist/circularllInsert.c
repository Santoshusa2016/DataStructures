#include <stdio.h>
#include <stdlib.h>

/*
2.15 Circular linked list in data structure

*/
struct Node{
    int data;
    struct Node *next;
};
struct Node *head, *temp;

int main(){

}

void createCircularLL(){
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
            head = temp= newNode;
        }
        else{
            temp->next = newNode;
            temp = newNode;
        }
        temp->next = head;

        printf("Do you want to continue ?\n");
        scanf("%d", &choice);
    }   
    
}

void display(){
    if (head == 0)
    {
        printf("List is empty");
    }
    else{
        temp = head;
        while (temp->next != head) //print till the node-> next is not head
        {
            printf("%d", temp->data);
            temp = temp->next;  
        }
        printf("%d", temp -> data); //Since we stop at node which has head
    }
    
}