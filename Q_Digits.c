#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <=n; i++)
    {
       int count;
       scanf("%d", &count);
       while (count !=0)
       {
        printf("%d ", count%10);
        count = count/10;
       }
       printf("\n");
       
    }
    
    return 0;
}