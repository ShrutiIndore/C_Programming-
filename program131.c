#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[], int iSize)
{
    int iCnt =0, iSum =0;
    
    for(iCnt= 0; iCnt < iSize ; iCnt++)    
    {
        
        {
            iSum= iSum + Arr[iCnt];
        }
    }
    return (iSum/iSize);     //Issue
    
}
    
int main()
{
    int iLength = 0, iCnt = 0;
    float fRet = 0;
    int *ptr = NULL;

    printf("Enter Number of Elements :");
    scanf("%d",&iLength);                   

    ptr = (int *)malloc(iLength * sizeof(int));
    if(NULL == ptr)       //Industrial Way of Coding
    {
        printf("Unable to allocate the Memory\n");
        return -1;
    }

    printf("Enter the Elements :\n");
    for(iCnt= 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    fRet = Average(ptr, iLength);

    printf("Average is: %f\n",fRet);

    free(ptr);

    return 0;
}
