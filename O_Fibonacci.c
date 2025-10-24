#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    long long fib1 = 0, fib2 = 1, fibN;

    if (N == 1)
        fibN = 0;
    else if (N == 2)
        fibN = 1;
    else {
        for (int i = 3; i <= N; i++) {
            fibN = fib1 + fib2;
            fib1 = fib2;
            fib2 = fibN;
        }
    }

    printf("%lld\n", fibN);
    return 0;
}
