#include<stdio.h>

void Display(int iNo)
{
    int iCnt =0;

    while(iNo>iCnt)
    {
        printf("*\n");
        iNo --;
    }
}



int main()
{
    int iValue =0;

    printf("Enter the Number");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}