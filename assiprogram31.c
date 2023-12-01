#include<stdio.h>

void Number(int iNo)
{
   int iCnt = 0;
   for(iCnt = 1; iCnt < iNo; iCnt++);
   
   if(iNo < 50 )
   {
     printf("Small \n");
   }
   else if(iNo < 100)
   {
     printf("Medium\n");
   }
   else//(iNo > 100)
   {
     printf("Large\n");
   }
   
}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}