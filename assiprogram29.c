#include<stdio.h>

void OddDisplay(int iNo)
{
    int i;
   for(i = 1; i <= iNo; i= i+2)
   // {
    //    if(i % 2!=0)
        {
            printf("%d\n", i);
        }
   // }
}

int main()
{
    int iValue = 0;
    printf("Enter number");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;    
}