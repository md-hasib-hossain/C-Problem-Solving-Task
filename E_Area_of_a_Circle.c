#include<stdio.h>
int main()
{
   double r;
   scanf("%lf", &r);

   double area = 3.141592653 * r * r;
   printf("%.9llf", area);
    return 0;
}