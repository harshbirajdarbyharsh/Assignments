#include<stdio.h>

int CountRange(int iNo)
{
    int i = 0;

    while(iNo != 0)
    {
        int digit = iNo % 10;

        if(digit >= 3 && digit <= 7 )
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

    iRet = CountRange(iValue);

    printf("%d",iRet);

    return 0;
}