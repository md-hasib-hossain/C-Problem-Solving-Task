#include <stdio.h>
#include <math.h>

int main()
{
    int x;
    scanf("%d", &x);

    int isPrime = 1; 

    if (x < 2)
        isPrime = 0;
    else
    {
        for (int i = 2; i <= sqrt(x); i++)
        {
            if (x % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
