#include<stdio.h>

int Count(int iNo)
{
   int i = 0;

   while(iNo != 0)
   {
     int digit = iNo % 10;

     if(digit < 6)
     {
         i++;
     }
     iNo = iNo / 10;
   }
   return i;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = Count(iValue); 
    printf("%d",iRet);

    return 0; 
}