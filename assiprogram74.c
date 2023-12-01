#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iLength,int iStart,int iEnd)
{
    printf("Element within the range [%d, %d]: ",iStart, iEnd);
    for(int iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] >= iStart && Arr[iCnt] <= iEnd)
        {
            printf("%d ",Arr[iCnt]);
        }
    }
    printf("\n");
}

int main()
{
    int iSize = 0,iCnt = 0,iValue1 = 0,iValue2 = 0,iLength = 0;
    int *p = NULL;

    printf("Enter number of element: ");
    scanf("%d",&iSize);

    printf("Enter the starting point: ");
    scanf("%d",&iValue1);

    printf("Enter the starting point: ");
    scanf("%d",&iValue2);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d element:\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

     Range(p, iSize,iValue1, iValue2);

    free(p);

    return 0;


}