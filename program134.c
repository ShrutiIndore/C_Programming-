#include<stdio.h>
#include<stdlib.h>

typedef int *  IPTR;               //In the program IPTR act as a int * in the program    IPTR is a reference of int * and  references are write always before the program

int main()
{   
    int iLength = 0, iCnt = 0;
    IPTR iPtr = NULL;

    printf("Enter the Number of Elements :\n");
    scanf("%d",&iLength);

    //Step 1 : Allocate the memory
    iPtr =(IPTR)malloc(iLength * sizeof(int));

    if(NULL == iPtr)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter the values :\n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

    //Step 2: Use the Memoery
    //Call to the function which contain Bussiness logic
    //Fun(iPtr, iLength);

    //Step 3 : Free the Memory

    free(iPtr);
    
    return 0;
}