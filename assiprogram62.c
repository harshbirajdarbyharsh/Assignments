#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
   int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
       if(Arr[iCnt] % 5 == 0)
       {
        printf("%d ",Arr[iCnt]);
       }
    }
    printf("\n");
}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0,iLength = 0;
    int *p = NULL;
    

    printf("Enter number of elements");
    scanf("%d",&iLength);

    p = (int *)malloc(iLength * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements\n",iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter element : %d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    
    Display(p,iLength);

    free(p);

    return 0;
}