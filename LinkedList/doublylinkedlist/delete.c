#include <stdio.h>
#include <stdlib.h>

/*
2.11 Insertion in Doubly linked list(beginning, end, specific position)
2.12 Deletion from doubly linked list (beginning, end, specific position)
*/
struct Node{
    int data;
    struct Node *previous;
    struct Node *next;
};
struct Node *head, *tail, *temp;
void main (){
    createDoublyLL();
}

void createDoublyLL(){
    struct Node *newNode;
    int i = 0;

    while (i < 3)
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter data:");
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
}
   
void deletefromBeg(){
    
    if (head == NULL)
    {
        printf("List is Empty");
    }
    else{
        temp = head;
        head = temp->next;
        head->previous = 0;
        temp->next = 0;
        free(temp);
    }
    
}

void deletefromEnd(){
    
    if (head == NULL)
    {
        printf("List is Empty");
    }
    else{
        temp = tail;
        tail->previous->next = 0;
        tail = tail->previous;
        free(temp); 
    }
}

void deleteAtPos(){
    int pos, i=1;
    printf("Delete Position:\n");
    scanf("%d", &pos);
    if (pos < 1 && pos > 4)
    {
        printf("Invalid Position");
    }
    else if(pos == 1){
        deletefromBeg();
    }
    else if (pos == 4){
        deletefromEnd();
    }
    else{
        temp = head;
        while (i < pos)
        {
            temp = temp->next;
            i++;
        }
        temp->previous->next = temp->next;
        temp->next->previous= temp->previous;
        free(temp);
    }
}

int getNodeCount(){

}
