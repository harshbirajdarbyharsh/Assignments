#include<stdio.h>

float TotalPercentage(int iMarks, int iTotal)
{
    float fPercentage = 0.0f;

    if(iMarks > iTotal)
    {
        printf("Invalid input \n");
        return fPercentage;
    }

    fPercentage = (((float)iMarks / (float)iTotal) * 100);
    return fPercentage;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    float fRet = 0.0f;

    printf("Enter the marks : \n");
    scanf("%d",&iValue1);

    printf("Enter the total marks : \n");
    scanf("%d",&iValue2);

    fRet = TotalPercentage(iValue1, iValue2);

    printf("Your percentage is : %f\n",fRet);

    return 0;
}