#include<stdio.h>

int main()
{
    int iSize = 0;
    int *ptr = NULL;

    //Setp 1 : ask the user about the size
    printf("How many elements?\n");
    scanf("%d",&iSize);

    //Setp 2 : Allocate the memory
    ptr = (int *)malloc(iSize * sizeof(int));

    //Setp 3 : Use the memory

    //Setp 4 : Deallocate the memory
    free(ptr);

    return 0;
}