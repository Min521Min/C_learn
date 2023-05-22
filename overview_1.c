#include <stdio.h>
#include <string.h>

// 关系操作符、逻辑操作符
// int main()
// {
//     int a = 3;
//     int b = 0;
//     int c = a && b;

//     printf("c = %d\n", c);

//     return 0;
// }

// 条件操作符
// int main()
// {
//     auto int a = 10; // auto
//     register int b = 20; // 建议把b放入寄存器中
//     signed int max = 0;

//     max = (a>b ? a : b); // 三目操作

//     printf("max = %d\n", max);
    
//     return 0;
// }

// 关键字
// auto, break, case, char, const, continue, default, do double, else, enum, extern, float, for, goto, if, int, long, register, return, short, unsigned, sizeof, static, struct, switch, typedef, union, void, volatile, while
// 变量名不可以与上述关键字重合
// void test()
// {
//     static int a = 1; // static 修饰局部变量，延长其生命周期；函数，改变链接属性，外部→内部
//     a++;
//     printf("a = %d\n", a);
// }
// // 声明外部函数 extern
// int main()
// {
//     typedef unsigned int u_int; // 类型定义、重定义
//     u_int num = 3;
//     int i = 0;
    
//     while (i <5)
//     {
//         test();
//         i++;
//     }
    
//     return 0;
// }

// 定义常量、宏
// #define MAX 1000
// #define MAX(X, Y) (X>Y ? X: Y)

// int main()
// {
//     int a = 30;
//     int b = 31;

//     int max = MAX(a, b);

//     printf("max = %d\n", max);
    
//     return 0;
// }

// 指针 → 空间
// int main()
// {
//     int a = 10;
//     int *p = &a; // 取地址
//     *p = 50; // 解引用操作符

//     char ch = 'w';
//     char* p1 = &ch;
//     *p1 = 'q';

//     printf("%p\n", p);
//     printf("a = %d\n", a);
//     printf("%p\n", &ch);
//     printf("ch = %c\n", ch);

//     printf("%lu\n", sizeof(p1));
    
//     return 0;
// }

// 结构体
// struct Book
//     {
//         char name[20]; // 数组名，本质上是地址，不能用book.name引用
//         short price;
//     };
// 
// int main()
// {
//     struct Book b2, b1 = {"程序设计", 55};
//     struct Book *pb = &b1;
//     // struct Book b2;
    
//     b2.price = 15;
//     strcpy(b2.name, "算法设计"); // 字符串拷贝 库函数 string.h

//     printf("书名：%s\n", b2.name); // . 结构体变量.成员
//     printf("Price: %d 元\n", b2.price);
//     printf("书名：%s\n", (*pb).name);
//     printf("Price: %d 元\n", (*pb).price);
//     printf("书名：%s\n", pb -> name); // -> 结构体指针->成员
//     printf("Price: %d 元\n", pb -> price);
    
//     return 0;
// }