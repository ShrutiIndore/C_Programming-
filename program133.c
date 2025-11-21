#include<stdio.h>
#include<stdlib.h>

int main()
{   
    int iLength = 0, iCnt = 0;
    int *iPtr = NULL;

    printf("Enter the Number of Elements :\n");
    scanf("%d",&iLength);

    //Step 1 : Allocate the memory
    iPtr = (int*)malloc(iLength * sizeof(int));

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