#include <stdio.h>
#define Max 5
int main(){
    int a[Max];
    int b[] = {9,8,4,0,7};
    char name[7] = {'s','a','n', 't', 'o', 's', 'h'}; 
    int n, i, size;
    printf("Enter number of elements in array \n");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Array name: %p\n", a);
    printf("Base address of array: %p\n", &a);
    printf("Value at base address:%d\n", *a);

    //Print value using pointer
    printf("Value at position 2 using pointer: %d\n", *(a+2));
    printf("Value at position 2 using index: %d\n", a[2]);
    printf("Value at position 2 using array name: %d\n", 2[a]);

    //Add number to Address
    printf("Add 1 to array name: %p\n", a+1);
    printf("Add 1 to address of array: %p\n", &a+1);
    
    //Add integer to pointer and print value
    printf("Add 1 to base address: %d\n", *(a+1));
    printf("Add 1 to value of base address: %d\n", *a+1);
    
    //Address Calculation   
    int *baseAddress = &a[0];
    printf("int array address calcution: Manual\n");
    for (i = 1; i < size; i++)
    {
        baseAddress = baseAddress + 1;
        printf("%p\n", baseAddress);
    }
    printf("int array address calcution: Auto\n");
    for (i = 0; i < size; i++)
    {
        printf("%p\n", &a[i]);
    }
    
    printf("char array address calcution: Auto\n");
    for (i = 0; i < 7; i++)
    {
        printf("%p\n", &name[i]);
    }

    char *charBaseAddress;
    printf("char array address calcution: Manual\n");
    charBaseAddress = &name[0];
    printf("%p\n", charBaseAddress);
    for (i = 1; i < 7; i++)
    {
        charBaseAddress = charBaseAddress + 1;
        printf("%p\n", charBaseAddress);
    }
    

    printf("Char array, base address is: %p\n", charBaseAddress);
    charBaseAddress++;
    printf("Char array, increment by 1: %p\n", charBaseAddress);
     charBaseAddress--;
    printf("Char array, decrement by 1: %p\n",charBaseAddress);
    printf("Char array, Add 1: %p\n", (charBaseAddress + 1));


    
}