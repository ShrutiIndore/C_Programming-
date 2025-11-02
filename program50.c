//factor 0f 6

#include<stdio.h>

void DisplayFactor(int iNo)
{
     int iCnt = 0;

     if (iNo <0)
     {
        iNo = -iNo;
     }
     
     for(iCnt = 1; iCnt<= iNo/2 ; iCnt++)
     {
        if((iNo % iCnt)==0)
        {
            printf("%d\n",iCnt);
        }
     }
}  

//Time complexicity :O(N\2)

int main() 
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
} 