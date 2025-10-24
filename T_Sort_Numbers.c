#include<stdio.h>
int main()
{
    long long int a;
    long long int b;
    long long int c;
    scanf("%lld %lld %lld", &a, &b, &c);

    long long orig_a = a, orig_b = b, orig_c = c;

    if (a > b)
    {
       long long int temp = a;
       a = b;
       b = temp;

    }
    if (b > c)
    {
       long long int temp = b;
       b = c;
       c = temp;

    }
      if (a > b)
    {
       long long int temp = a;
       a = b;
       b = temp;

    }
    printf("%lld\n", a);
    printf("%lld\n", b);
    printf("%lld\n", c);

    printf("\n");

    printf("%lld\n", orig_a);
    printf("%lld\n", orig_b);
    printf("%lld\n", orig_c);
    return 0;
}