//Accept number from user and count digit
//ASCII Value = 0= 48, 9 = 57
#include<stdio.h>

void CountDigits(char str[])
{
    int iCount =0;
    

    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
           iCount++;
        }
       
        str++;
    }
    printf("Number of digits are :%d\n", iCount);
    
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);                   
    
    CountDigits(Arr);

   return 0;
}