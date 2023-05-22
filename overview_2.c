#include <stdio.h>
#include <string.h>

// void PrintArray(int i_array[], int i_length);
// 字面常量 2 3.14
// # define 定义的标识符常量
// #define MAX 12

// int main()
// {
//     const int a = 10; // const修饰的常变量，本质是变量，具有常属性
//     int arr[a] = {MAX};
// 
//     printf("MAX = %d\n", MAX);
//     PrintArray(arr, (sizeof(arr)/sizeof(*arr)));

//     return 0;
// }

// void PrintArray(int i_array[], int i_length)
// {
//     for (int i=0; i<i_length; i++)
//     {
//         printf("%d\t", i_array[i]);
//     }
//     putchar('\n');
// }

// 枚举常量：不能更改
// enum Sex
// {
//     male, famale, secret
// };

// int main()
// {
//     enum Sex sex = male;

//     printf("%d\n", male);
//     printf("%d\n", famale);
//     printf("%d\n", secret);

//     return 0;
// }

// 字符串
// int main()
// {
//     char arr1[] = "abc";
//     char arr2[] = {'a', 'b', 'c', 0}; // 0表示字符串结束标志 {'a', 'b', 'c', '\0'}
//     char arr3[] = {'a', 'b', 'c'};

//     printf("%s\n", arr1);
//     printf("%s\n", arr2);
//     printf("%s\n", arr3);
//     printf("%lu\n", strlen(arr3)); //strlen → 字符串长度，没有结束标记，长度不确定
//     printf("%lu\n", (sizeof(arr3) / sizeof(*arr3)));

//     return 0;
// }

// 转义字符
// int main()
// {
//     printf("C:\\test\32\test.c\n"); // \t 表示水平制表符
//     printf("%s \n", "\"");
//     printf("%lu \n", strlen("C:\test\32\test.c\n"));

//      return 0;
// }

// 选择语句
// int main()
// {
//     int input = 0;

//     puts("加入比特");
//     puts("是否会选择好好学习<0 OR 1>");
// 
//     scanf("%d", &input);

//     if (input == 1)
//     {
//         printf("未来可期！\n");
//     }
//     else
//     {
//         printf("回家卖红薯！\n");
//     }

//     return 0;
// }

// 循环语句
// int main()
// {
//     int line = 0;

//     puts("加入比特");

//     while (line < 200)
//     {
//         printf("%-3d 敲%d行代码\n", line, line+1);
//         line++;
//     }

//     return 0;
// }

// 函数
// int Add(int x, int y)
// {
//     int z = x+y;
//     return z;
// }

// int main()
// {
//     int a = 110;
//     int b = 999;
//     int sum_ab = 0;
//     int c = 2001;
//     int d = 2023;
//     int sum_cd = Add(a, d);

//     sum_ab = Add(a, b);
//     sum_cd = Add(c, d);

//     printf("the value of sum is %d\n", sum_ab);
//     printf("the value of sum is %d\n", sum_cd);
    
//     return 0;
// }

// 数组：一组相同类型元素的集合
// int main()
// {
//     int arr[10] = {1,2,3,4,5,6,7,8,9,10}; // 下标从0开始
//     // char ch[20];
//     // float arr2[30];

//     printf("%d\n", arr[1]);
//     printf("%d\n", sizeof(arr));

//     return 0;
// }

// 操作符
// int main()
// {
//     int a = 5/2; // 取商的整数
//     int b = 5%2; // 取模
//     int c = 1;
//     int c_new;
//     int d = 3; // 0011
//     int e = 5; // 0101
//     int de_new;
//     int f = 20;
//     int h;
//     int i = (int) 3.54; // 强制类型转换

//     c_new = c<<3; // 移位操作
//     de_new = d^e; // 按位进行逻辑运算 & | ^ 0110
//     f += 10;
//     h = d++; // 后置++ 前置++ / --

//     printf("a = %d\n", a);
//     printf("b = %d\n", b);
//     printf("c_new = %d\n", c_new);
//     printf("de_new = %d\n", de_new);
//     printf("f = %d\n", f);
//     printf("!f = %d\n", !f); // 单目操作符
//     printf("the size of f is %lu\n", sizeof(f)); // 计算变量、类型所占空间大小，单位是字节byte
//     printf("d = %d, h = %d\n", d, h);
//     printf("i = %d\n", i);

//     return 0;
// }