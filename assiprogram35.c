#include<stdio.h>

void TableRev(int iNo)
{
   int iCnt = 0;

   for(iCnt = 1; iCnt <= 10; iCnt++)
   {
      printf("%d\n",iCnt*iNo);
   }
}

int main()
{
    int iValue = 0;

    printf("Enter Number");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}
