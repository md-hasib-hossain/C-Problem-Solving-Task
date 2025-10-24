#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    
     int x = ((a % 100) * (b % 100)) % 100;
   x = (x * (c % 100)) % 100;
   x = (x * (d % 100)) % 100;
   

   printf("%02d", x);
    

    
    return 0;
}