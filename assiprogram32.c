#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    
  //  printf("Display of %d are :\n",iNo);

    for(iCnt = 1; iCnt > iNo; iCnt++)
    {
       
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