//Accept numbers from user and find Minimum number  (better code for industial)          
#include<stdio.h>
#include<stdlib.h>


typedef int *  IPTR;               //In the program IPTR act as a int * in the program    IPTR is a reference of int * and  references are write always before the program

int Minimum(int Arr[], int iSize)
{
    int iCnt = 0, iMin = 0;   

    for(iMin = Arr[iCnt], iCnt = 0; iCnt < iSize; iCnt++)    //Chage
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
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
    iRet = Minimum(iPtr, iLength);

    printf("Minimum number is : %d\n", iRet);
    

    //Step 3 : Free the Memory
    free(iPtr);
    
    return 0;
}