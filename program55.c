#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
  int iCnt = 0 , iFrequency = 0;

  if(iNo<0)
  {
    iNo = -iNo;
  }

  for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
  {
    if( (iNo % iCnt ) == 0)   //No factor
    {
      iFrequency++;
      break;                  //Optimization 
    }
  }

  if(iFrequency == 0)
  {
    return true;
  }
  else                          //At least 1 factor 
  {
    return false;
  }
}

int main()
{
  int iValue =0;
  bool bRet = false;

  printf("Enter the Number:\n");
  scanf("%d",&iValue);

  bRet=CheckPrime(iValue);

  if(bRet == true)
  {
    printf("%d is a prime number\n",iValue);
  }
  else
  {
    
    printf("%d is a not prime number\n",iValue);
  }

    return 0;
}

/*
    Time complexicity :For Prime - N/2
    Time complexicity :fFor Non Prime - either 1 or 2

*/