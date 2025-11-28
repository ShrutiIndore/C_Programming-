//Accept number from user and count all character 
//ASCII Value = 'A'= 65, 'Z' = 
#include<stdio.h>

void CountAll (char str[])
{
    int iCountSmall =0;
    int iCountCapital =0;

    while(*str != '\0')
    {
        if((*str >='A') && (*str <= 'Z'))
        {
           iCountCapital++;
        }
        else
        {
           iCountSmall++;
        }
        str++;
    }
    printf("Number of small characters are :%d\n", iCountSmall);
    printf("Number of capital characters are :%d\n",iCountCapital);
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);                   
    
    CountAll(Arr);

   return 0;
}