#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int iNo)
{
    if((iNo < 100) == 0)
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
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Please enter number");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);
    
    if(bRet == TRUE)
    {
        printf("Greater");
    }
    else
    {
        printf("smaller");
    }
    return 0;
}