#include<stdio.h>

void Pattern(int iRow,int iCol)
{
   int i = 0, j = 0;
   int counter = 1;

   for(i = 1; i <= iRow; i++)
   {
     for(j = 1; j <= iCol; j++,counter++)
     {
        printf("%d\t",counter);
        if(counter == 9)
        {
            counter = 0;
        }
     }
     printf("\n\n");
   }
}

int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter number of rows and columns");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}