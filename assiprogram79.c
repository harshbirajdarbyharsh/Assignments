#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
   int iCnt = 0;
   int num = 0;

   for(iCnt = 0; iCnt < iLength; iCnt++)
   {
      num = Arr[iCnt];
      if(num >= 100 && num <= 999)
      {
        printf("%d\t", num);
      }
   }
   printf("\n");
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

    Digits(p, iSize);

    free(p);

    return 0;
}