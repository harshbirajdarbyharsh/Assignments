#include<stdio.h>

void Display()
{
    int i = 0;
    int iNo = 5;

    for(i = 1;i <= iNo; i++)
    {
        printf("%d",i);
        i++;
    }
}

int main()
{
    Display();

    return 0;
}