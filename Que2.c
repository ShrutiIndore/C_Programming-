#include<stdio.h>

void DisplayFactor(int iNo)
{
    int iCnt =0;

    for(iCnt =1; iCnt <= iNo; iCnt ++)
    {
        if((( iNo % iCnt)==0) && ((iCnt % 2)==0))
        {
            printf("%d\t",iCnt);
        }
    }
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
}

int main()
{
    int iValue = 0;

    printf("Even Number :\n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}