#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    while (b != 0)
    {
        int tem = a % b;
        a = b;
        b = tem;
    }
    printf("%d\n", a); 
    
    return 0;
}