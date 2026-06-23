#include <stdio.h>

int main() {
    printf("Hello, World!");

     int a;
    float b;
    char c;

    scanf("%d %f %c", &a, &b, &c);

    printf("Integer = %d\n", a);
    printf("Float = %.2f\n", b);
    printf("Character = %c\n", c);
    
    return 0;
}