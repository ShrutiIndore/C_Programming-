//Accept N number from user and find frequency of the number 11

#include<stdio.h>
#include<stdlib.h>

typedef int *  IPTR;               //In the program IPTR act as a int * in the program    IPTR is a reference of int * and  references are write always before the program

int FrequencyCalculate(int Arr[], int iSize)
{
    int iCnt = 0, iCount = 0;
     
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{   
    int iLength = 0, iCnt = 0, iRet = 0;
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
    iRet = FrequencyCalculate(iPtr, iLength);
    printf("Frequency of 11 is :%d\n",iRet);

    //Step 3 : Free the Memory
    free(iPtr);
    
    return 0;
}