#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
   /* {
       printf("*\n");
    }   

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
       printf("#\n");
    }  */

    {
        if((iNo % 2) == 0)
        {
            printf("*\n");
        }
        else
        {
            printf("# \n");
        }
    } 
    
}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}