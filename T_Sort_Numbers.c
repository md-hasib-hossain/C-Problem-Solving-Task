#include<stdio.h>
int main()
{
    long long int a, b, c;
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
      if (a > c)
    {
       long long int temp = a;
       a = b;
       b = temp;

    }
    printf("%lld\n %lld\n %lld\n", a, b, c);

    printf("\n");

    printf("%lld\n %lld\n %lld\n", orig_a, orig_b, orig_c );
    return 0;
}


/*
Given three numbers A, B, C. Print these numbers in ascending order followed by a blank line and then the values in the sequence as they were read.

Input
Only one line containing three numbers A, B, C ( - 106  ≤  A, B, C  ≤  106)

Output
Print the values in ascending order followed by a blank line and then the values in the sequence as they were read.

Examples
InputCopy
3 -2 1
OutputCopy
-2
1
3

3
-2
1
InputCopy
-2 10 0
OutputCopy
-2
0
10

-2
10
0
*/