#include<stdio.h>

typedef int Bool;  //Define bool as alias for int
#define True 1
#define False 0         
 
Bool CheckEven(int iNo)
{
    if(iNo % 2==0)
    {
        return True;
    }
    else 
    {
        return False;
    }
}

int main()
{
    int iValue =0;
    Bool bRet =False;

    printf("Enter Number:");
    scanf("%d",&iValue);

    bRet= CheckEven(iValue);

    if(bRet == True)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is odd\n");
    }
    return 0;
}