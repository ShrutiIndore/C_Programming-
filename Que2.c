#include<stdio.h>

void FactRev(int iNo)
{
   int iCnt = 0;
   
   if(iNo <= 0)
   {
    iNo = -iNo;
   }

   printf("Factors of %d in decresing order are :", iNo);

   for( iCnt = iNo/2; iCnt>=1;iCnt--)
   {
    if(iNo% iCnt==0)
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

  FactRev(iValue);

  return 0;
}