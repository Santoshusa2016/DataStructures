#include <stdio.h>
int main (){
    int i,j;
    int a[3][4];
    int b[3][3] = {{1,2,3},{4,5,6}, {6,2,5}};
    int c[][3] = {{1,2,3},{4,5,6}}; //Cannot leave column subscript blank

    printf("Enter elements of array \n");
    for (i = 0; i < 3; i++)
    {
       for (j = 0; j < 3; j++)
       {
           printf("Index %d, %d \n", i, j);
           scanf("%d", &b[i][j]);
       }
    }

    // printf("Elements in array are:\n");
    // for (i = 0; i < 3; i++)
    // {
    //    for (j = 0; j < 3; j++)
    //    {
    //        printf("%d\n", b[i][j]);
    //    }
    // }

    int *p;
    p = b[0];

    // printf("Pointer p: %p\n", p);
    // printf("Name of 2D array: %p\n", b);
    // printf("Address of 2D array b: %p\n", &b);
    // printf("Value of 2D array: %p\n", *b); //This is b[0] important
    // printf("Name of child array: %p\n", b[0]);

    // printf("Address of 0,1 Index: %p\n", *b+1);
    // printf("Address of 0,1 Index: %p\n", &b[0][1]);
    // printf("Value at 0,1 Index: %d\n", b[0][1]);
    // printf("Add 1 to array name: %d\n", *(*b+ 1));

    // printf("Name of 2nd array: %p\n", b[1]);
    // printf("Address of 2nd array: %p\n", &b[1]);
    // printf("Value of 2nd array: %p\n", *(b+1));

    printf("b[1][2]: %p\n", &b[1][2]); 
    printf("b[1][2]: %p\n", *(b+1)+2); 
    // In this case the trigger goes inside actual array 
    printf("Double pointer to get value: %d\n", *(*(b+1)+2)); 
    printf("Value at b[1][2]: %d\n", b[1][2]); 
}   