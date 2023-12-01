#include<stdio.h>

int OddFactorial(int iNo)
{
   int iCnt = 0;
   int iOdd = 1;
   
   for(iCnt = 1;iCnt <= iNo;iCnt += 2)
   {
    if((iNo < 0) == 0)
   {
        iOdd *= iCnt;
   }
   }
   return iOdd;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter Number");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of numbers is %d",iRet);

    return 0;
}