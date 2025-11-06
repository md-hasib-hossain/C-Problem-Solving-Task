#include<stdio.h>

int sum_function(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}

int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    int result = sum_function(a,b);
    printf("%d", result);
    return 0;
}

/* 
Given two numbers X and Y, Print their summation.

Note: Solve this problem using function.

Input
Only one line contains two numbers X and Y (0 ≤ X, Y ≤ 105).

Output
Print the summation value.

Example :
InputCopy
5 2
OutputCopy
7

*/
