//Accept N number from user As well as 1 another number  and check wheather it is present or not                //Significant of iCount in program- Que (Remove iCount)

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int *  IPTR;               //In the program IPTR act as a int * in the program    IPTR is a reference of int * and  references are write always before the program


// < O(N)    order of N = Time Complexity
bool LinearSeach(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
     
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
        
            break;
        }
    }
    if(iCnt == iSize)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{   
    int iLength = 0, iCnt = 0,iValue =0;
    bool bRet = false;
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

    printf("Enter the Number to Search :\n");
    scanf("%d",&iValue);

    //Step 2: Use the Memoery
    bRet = LinearSeach(iPtr, iLength, iValue);
    if(bRet == true)
    {
        printf("%d is Present in the data\n", iValue);
    }
    else
    {
        printf("%d is not  Present in the data\n", iValue);
    }

    //Step 3 : Free the Memory
    free(iPtr);
    
    return 0;
}