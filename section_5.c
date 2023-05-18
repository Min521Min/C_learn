// 常量及其所占空间大小

#include<stdio.h>

int main()
{
    // 整型
    short int a = 1;
    int b = 1;
    long int c = 1;
    unsigned int d = 1U;

    printf("a = %d, the size of it is %d.\n", a, sizeof(a));
    printf("b = %d, the size of it is %d.\n", b, sizeof(b));
    printf("c = %d, the size of it is %d.\n", c, sizeof(c));
    printf("d = %d, the size of it is %d.\n", d, sizeof(d));

    // 实型
    float e = 1.2345e2;
    double f = 5.458e-1;

    printf("e = %.2f, the size of it is %d.\n", e, sizeof(e));
    printf("f = %f, the size of it is %d.\n", f, sizeof(f));

    // 字符型
    char g = 'a';

    putchar('\0'); // 字符结束标志
    printf("g = %c, the size of it is %d.\n", g, sizeof(g));
    printf("h = %s, the size of it is %d.\n", "a", sizeof("a")); // 字符串

    return 0;
}
