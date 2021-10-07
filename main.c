#include<stdio.h>


int main() {
    int a;
    scanf("%o", &a);
    printf("%x\n", a);
    printf("%x\n", a);
    printf("%x\n", a << 4);
    printf("%x\n", a);
    printf("%x\n", ~a);
    int b;
    scanf("%x", &b);
    printf("%x\n", b & a);

    return 0;
}
