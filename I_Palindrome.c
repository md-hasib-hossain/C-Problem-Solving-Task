#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int reversed = 0;
    int original = n;

    while (n != 0)
    {
        int num = n % 10;
        reversed = reversed * 10 + num;
        n = n / 10;
    }
    printf("%d\n", reversed);

     if (original == reversed)
     {
        printf("YES\n");
     }
        
    else
    {
        printf("NO\n");
    }
        
    
    

    return 0;
}