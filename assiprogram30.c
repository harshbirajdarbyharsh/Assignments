#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int i;
   for(i = 1; i <= iNo; i++)

    {
        printf("%d\n", iNo * i);
        
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;    
}