#include<stdio.h>

int EvenFactorial(int iNo)
{
   int iCnt = 0;
   int iEven = 1;
   
   for(iCnt = 2;iCnt <= iNo;iCnt + 2)
   {
    if((iNo < 0) == 0)
   {
        iEven *= iCnt;
   }
   }
   return iEven;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter Number");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of numbers is %d",iRet);

    return 0;
}