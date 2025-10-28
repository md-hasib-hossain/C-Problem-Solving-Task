#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int year = n / 365;
    int remin = n % 365;

    int month = remin / 30;
    int day = remin % 30;

    printf ("%d years\n", year);
    printf ("%d months\n", month);
    printf ("%d days\n", day);



    return 0;
}