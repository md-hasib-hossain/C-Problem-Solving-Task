#include <stdio.h>

int main() {
 
    char c;
    scanf("%c", &c);

    if (c == 'z') //Condition False
    {
       printf("a\n");
    }
    else
    {
        printf("%c\n", c + 1);
    }
    

    return 0;
}
