#include<stdio.h>
void Mimi_max_fun(int n, int arra[])
{
    int mini = arra[0], max = arra[0];
    for (int i = 0; i < n; i++)
    {
        if (arra[i] < mini)
        {
            mini = arra[i];
        }
        if (arra[i] > max)
        {
            max = arra[i];
        }
        
    }
    
    printf("%d %d", mini, max);

}

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i <=n; i++)
    {
        scanf("%d", &a[i]);
    }
    Mimi_max_fun(n, a);
    
    return 0;
}

/*
Given an array A of size N. Print the minimum and the maximum number in the array.

Note: Solve this problem using function.

Input
First line will contain a number N (1 ≤ N ≤ 103) number of elements.

Second line will contain N numbers (0 ≤ Xi ≤ 105).

Output
Print the minimum and the maximum number separated by a space.

Example
InputCopy
5
10 13 95 1 3
OutputCopy
1 95
*/