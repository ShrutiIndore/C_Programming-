//Accept number from user and count small character 
//ASCII Value = 'a'= 97, 'z' = 122
#include<stdio.h>

int CountSmall(char str[])
{
    int iCount =0;

    while(*str != '\0')
    {
        if((*str >=97) && (*str <= 122))
        {
        iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;


    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);                   
    
                      
    iRet = CountSmall(Arr);

    printf("Numbers of small characters are : %d\n",iRet);
    return 0;
}