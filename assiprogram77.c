#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

int Minimum(int Arr[], int iLength)
{
   int iCnt = 0;
   int iMin = Arr[0];

   for(iCnt = 0; iCnt < iLength; iCnt++)
   {
      if(Arr[iCnt] < iMin)
      {
         iMin = Arr[iCnt];
      }
   }
   return iMin;
}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0,iValue = 0,iLength = 0;
    int *p = NULL;

    printf("Enter number of elements");
    scanf("%d",&iSize);

    printf("Enter the number:\n");       

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Minimum(p,iSize);

    printf("Smallest Number is %d",iRet);

    free(p);

    return 0;
}