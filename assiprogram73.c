#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;
    int iFirstOcc = -1;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFirstOcc = iCnt;
        }
    }  
    return iFirstOcc;
}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0,iValue = 0,iLength = 0;
    int *p = NULL;

    printf("Enter number of element: ");
    scanf("%d",&iSize);

     printf("Enter the number:");
    scanf("%d",&iValue);

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

    iRet = FirstOcc(p, iSize,iValue);

    if(iRet == -1)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("There occurrence of number is %d",iRet);
    }

    free(p);

    return 0;


}