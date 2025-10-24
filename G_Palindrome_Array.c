#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int indx[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &indx[i]);
    }
    
    int i = 0;
    int j = n-1;
    int palindrome = 1;

    while (i < j)
    {
        if (indx[i] != indx[j])
        {
            palindrome = 0;
        }
        i++;
        j--;
        
    }
    if (palindrome)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    

    
    return 0;
}