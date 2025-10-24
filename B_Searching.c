#include <stdio.h>

int main() {
    int n, x;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &x);
    
    int position = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            position = i;
            break;
        }
    }
    
    printf("%d\n", position);
    
    return 0;
}