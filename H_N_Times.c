#include <stdio.h>

void printCharNTimes(int n, char c)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c ", c); 
    }
    printf("\n"); 
}

int main()
{
    int T; 
    scanf("%d", &T);
    int N;
    char C;
    for (int i = 0; i < T; i++)
    {      
        scanf("%d %c", &N, &C);

        printCharNTimes(N, C);
    }

    return 0;
}

/*
Given a number N
 and a character C
. Print the character(C
) N
 times.

Note: Solve this problem using function.

Input
The first line contains a number T
 (1≤T≤50)
 the number of test cases.

Next T
 lines contains a number N
 and a character C
 (1≤N≤100)
.

Output
Print T
 lines, for every line print the character(C
) N
 times separated by space.

Examples
InputCopy
2
1 n
5 O
OutputCopy
n
O O O O O
InputCopy
1
8 z
OutputCopy
z z z z z z z z


*/