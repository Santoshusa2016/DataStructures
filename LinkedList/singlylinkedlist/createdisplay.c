#include <stdio.h> 
#include <stdlib.h> 

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head, *newNode, *temp; //In C if we dont use typedef we need to use fully qualified name
    head = 0;
    int choice = 1;
    /*
    In C language we create dynamic memory using malloc function. Malloc function
    would return a pointer to starting address of the element.
    In C# we use the new keyword.
    */

   //How to create a linked list
    while (choice)
    {
            //allocate node in the heap memory
            newNode = (struct Node *)malloc(sizeof(struct Node));
            /* code */
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
            printf("Do you want to continue?Type 0 for No, 1 for Yes\n");
            scanf("%d", &choice);   
    }
    
    //How to display and traverse a linked list
    display(head);
}

display(struct Node *head){
    struct Node *temp = head;
    while (temp != 0)
    {
        printf("%d\n", temp ->data);
        temp = temp->next;
    }
}
