#include <stdio.h>
#include <math.h>

int main() {
    long long a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    
    double left = b * log(a);
    double right = d * log(c);
    
    if (left > right + 1e-9) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}