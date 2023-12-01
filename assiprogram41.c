#include<stdio.h>

double CircleArea(float fRadius)
{
  /* float fArea = 0.0f;
  //float PI = 3.14f;
   fArea = 3.14 * fRadius * fRadius;

   if(fRadius <= 0.0)
    {
        printf("Error: Please enter valid value\n");
        return 0;
    }
  
   return fArea;*/
   auto float fAns = 0.0f;
    auto const float PI = 3.14f;
    fAns = PI * fRadius * fRadius;
   return fAns; 
} 

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius");
    scanf("%d",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is\n %d",dRet);

    return 0;
}