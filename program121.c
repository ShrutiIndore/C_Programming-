//Call by address of number

#include<stdio.h>

void Display(int Arr[])
{
    int iCnt =0;
    
    for(iCnt= 0; iCnt < 7 ; iCnt++)    //using hardcoded but it is problem
    {
        printf("%d\n", Arr[iCnt]);
      
    }
}
    
int main()
{
    int Brr[]={10,20,30,40};   
    
    Display(Brr);    //Display(100);
    
    return 0;
}
