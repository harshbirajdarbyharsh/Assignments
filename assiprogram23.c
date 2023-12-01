#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkEqual(int iNo)
{
    if(iNo == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    BOOL bRet = FALSE;

    printf("please enter two number");
    scanf("%d %d",&iValue1,&iValue2);

    bRet = ChkEqual(iValue1);
    bRet = ChkEqual(iValue2);
    if(bRet <! TRUE)
    {
        printf("Equal");
    }
    else
    {
        printf("Not equal");
    }

    return 0;
}