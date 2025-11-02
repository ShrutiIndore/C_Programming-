#include<stdio.h>

void NonFactor(int iNo)
{
   int iCnt = 0;
   
   if(iNo <= 0)
   {
    iNo = -iNo;
   }

   printf("Factors of %d in decresing order are :", iNo);

   for( iCnt = 1; iCnt<iNo;iCnt++)
   {
    if(iNo% iCnt !=0)
    {
       printf("%d",iCnt);
    }
   }
   printf("\n");
}

int main()
{
  int iValue= 0;
  
  printf("Enter Number:");
  scanf("%d",&iValue);

  NonFactor(iValue);

  return 0;
}