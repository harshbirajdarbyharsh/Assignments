#include<stdio.h>

int FactorialDiff(int iNo)
{
  int iCnt = 0;
  int iDiff = 1;

  for(iCnt = 2;iCnt <= iNo;iCnt+2)
  {
     if((iNo < 0) == 0)
     {
        iDiff *= iCnt; 
     }
  }
  return iDiff;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter Number");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d",iRet);

    return 0;
}