#include<stdio.h>

void Table(int iNo)
{
  // int iCnt = 0;

   for(int iCnt = 10; iCnt > 1; iCnt--)
   {
      printf("%d\n",iCnt*iNo);
   }
}

int main()
{
    int iValue = 0;

    printf("Enter Number");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}