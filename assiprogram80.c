#include<stdio.h>
#include<stdlib.h>

int  SumDigits(int num) 
{
    int sum = 0;

    while (num > 0) 
    {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

void DigitsSum(int Arr[], int iLength)
 {
    int iCnt = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
     {
        int num = Arr[iCnt];
        int sum =  SumDigits(num);
        printf(" SumDigits of %d is %d\n", num, sum);
    }
}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0;
    int *p = NULL;

    printf("Enter number of element:");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements: ",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    DigitsSum(p, iSize);

    free(p);

    return 0;
}