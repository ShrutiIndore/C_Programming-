//Accept N number from user As well as 1 another number  and find frequency of that number 

#include<stdio.h>
#include<stdlib.h>

typedef int *  IPTR;               //In the program IPTR act as a int * in the program    IPTR is a reference of int * and  references are write always before the program

int FrequencyCalculate(int Arr[], int iSize, int iNo)
{
    int iCnt = 0, iCount = 0;
     
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{   
    int iLength = 0, iCnt = 0,iValue =0, iRet = 0;
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

    printf("Enter the Number to Calculate Frequency:\n");
    scanf("%d",&iValue);

    //Step 2: Use the Memoery
    iRet = FrequencyCalculate(iPtr, iLength, iValue);
    printf("Frequency of %d  is :%d\n",iValue,iRet);

    //Step 3 : Free the Memory
    free(iPtr);
    
    return 0;
}