#include<stdio.h>

void Pattern(int iNo)
{
   int iCnt = 0;
   int evenCount = 0;

   for(iCnt = 0; iCnt < iNo; iCnt++)
   {
     if((iCnt % 2) == 0)
     {
        evenCount++;
        printf("%d",iCnt);
     }
   }
printf("Even numbers from 0 to %d are: ", iNo);
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements : \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}