// 变量的储存类别

#include<stdio.h>

void AddOne() // auto：动态存储区，可以省略，不特别指定时，局部变量默认为auto型
{
    auto int iInt = 1;
    iInt = iInt + 1;
    printf("%d\n", iInt);
}

void click() // static：作用域为声明的函数内，程序执行期间时钟保持赋予的值，且初始化操作只在第一次起作用
{
    static int iSumClick = 0;

    iSumClick = iSumClick + 1;
    printf("SumClick = %d\n", iSumClick);
}

int main()
{
    printf("第一次调用: ");
    AddOne();
    printf("第二次调用: ");
    AddOne();

    click();
    click();
    click();
    click();
    click();

    return 0;
}