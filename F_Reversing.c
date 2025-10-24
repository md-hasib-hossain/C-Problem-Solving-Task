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
     while (i < j)
     {
        int temp = indx[i];
        indx[i] = indx[j];
        indx[j] = temp;
        i++;
        j--;
     }
     
     for (int i = 0; i < n; i++)
    {
        printf("%d ", indx[i]);
    }
    
    return 0;
}