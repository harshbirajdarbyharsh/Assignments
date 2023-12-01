#include<stdio.h>

int MultiFact( int iNo)
{    
   // printf("%d",iNo);
     int Fact = 1;
     for (int i = 1; i < iNo; i++)
     {
        if(iNo % i == 0)
        {
          // printf("%d \n",i);
           Fact= Fact * i;
        }
     }
    return Fact;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);


   iRet= MultiFact(iValue);
    printf("fact =%d",iRet);

    return 0;
}