#include<stdio.h>

int CountOdd(int iNo)
{
    int i = 0;

    while(iNo > 0)
    {
        int digit = iNo % 10;

        if(digit % 2 == 1 )
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

    printf("enter number");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);

    printf("%d",iRet);

    return 0;
}