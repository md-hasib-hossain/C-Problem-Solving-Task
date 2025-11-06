#include<stdio.h>

int Counting_function(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i > 1)
        {
           printf(" ");
        }
        
        printf("%d", i);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    Counting_function(n);
    return 0;
}


/*
Given a number N. Print all numbers from 1 to N.

Note: Solve this problem using function.

Input
Only one line contains a number N (1 ≤ N ≤ 103).

Output
print numbers form 1 to N separated by a single space.

Example
InputCopy
5
OutputCopy
1 2 3 4 5
Note
Don't use any leading or trilling spaces.

*/