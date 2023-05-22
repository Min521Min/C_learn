// 函数

#include<stdio.h> // 标准输入输出
#include<math.h> // 数学运算
#include<ctype.h> // 字符串相关
#include<string.h> // 字符串处理
#include "ExternalFunction.c" // 引用外部函数

/*函数申明*/
void Sum();
int InputInteger();
int Fabonacci(int iTerm);
// extern int Factorial(int iTerm); // 外部函数
void LocalVariable();
void Math();
void Char();
void String();

int main()
{
    // puts("~~~~~~~~~~~~~~~~     求和函数     ~~~~~~~~~~~~~~~~");
    // Sum();
    // puts("~~~~~~~~~~~~~~~~     递归调用     ~~~~~~~~~~~~~~~~");
    // int iTerm = InputInteger();
    // printf("Febonacci(%d) = %d\n", iTerm, Fabonacci(iTerm));
    // puts("~~~~~~~~~~~~~~~~     外部函数     ~~~~~~~~~~~~~~~~");
    // printf("10! + 11! + 12! + 13! + 14! = %d\n", Factorial(10)+Factorial(11)+Factorial(12)+Factorial(13)+Factorial(14));
    // puts("~~~~~~~~~~~~~~~~     全局变量     ~~~~~~~~~~~~~~~~");
    // printf("GlobalValue = %d\n", iGlobalValue);
    // puts("~~~~~~~~~~~~~~~~     局部变量     ~~~~~~~~~~~~~~~~");
    // LocalVariable();
    // puts("~~~~~~~~~~~~~~~~     数学函数     ~~~~~~~~~~~~~~~~");
    // Math();
    // puts("~~~~~~~~~~~~~~~~     字符函数     ~~~~~~~~~~~~~~~~");
    // Char();
    puts("~~~~~~~~~~~~~~~~     字符串函数     ~~~~~~~~~~~~~~~~");
    String();

    return 0;
}

int InputInteger()
{
    int iNumber = 0;

    puts("Please input the number of terms:");
    scanf("%d", &iNumber);

    return iNumber;
}

void Sum()
{
    int iSum=0;

    iSum = InputInteger() + InputInteger();

    printf("Result = %d\n", iSum);
}

int Fabonacci(int iTerm)
{
    if (2 >= iTerm)
    {
        return 1;
    }
    else
    {
        return Fabonacci(iTerm-1)+Fabonacci(iTerm-2);
    }
}

void LocalVariable()
{
    int iNumber = 1;
    printf("iNumber = %d\n", iNumber);

    if (0 < iNumber)
    {
        int iNumber = 2;
        printf("iNumber = %d\n", iNumber);

        if (0 < iNumber)
        {
            int iNumber = 3;
            printf("iNumber = %d\n", iNumber);
        }

        printf("iNumber = %d\n", iNumber);
    }
    printf("iNumber = %d\n", iNumber);
}

void Math()
{
    double fNumber = -1234.45;
    puts("-----   abs   -----");
    printf("abs(-9) = %d\n", abs(-9));
    puts("-----   labs   -----");
    printf("labs(-1234567890L) = %d\n", labs(-1234567890L));
    puts("-----   fabs   -----");
    printf("fabs(-1234.45) = %d\n", fabs(fNumber));
    puts("-----   sin   -----");
    printf("sin(45) = %d\n", sin(45));
    puts("-----   cos   -----");
    printf("cos(45) = %d\n", cos(45));
    puts("-----   tan   -----");
    printf("tan(45) = %d\n", tan(45));
}

void Char()
{
    char c_char;
    puts("Please input a char:");
    c_char = getchar();

    if (isalpha(c_char))
    {
        puts("输入的字符是字母");
    }
    else if (isdigit(c_char))
    {
        puts("输入的字符是数字");
    }
    else
    {
        puts("未知类型");
    }

    if (isalnum(c_char))
    {
        puts("输入的字符是字母或数字");
    }
    else
    {
        puts("未知类型");
    }
}

void String()
{
    char c_string1[200] = "BeiJing ";
    char c_string2[] = "huan ying nin!";
    char c_string3[30]; // 字符数组必须有大小，且有足够大小装下待复制的字符串
    char c_string4[30];
    char c_password[20] = "2020210792";
    char c_user_password[20];


    // 输入字符串
    // puts("Please input a string:");
    // gets(c_string4);
    // c_string3 = c_string1; 不能直接赋值
    // strcpy(c_string3, c_string1);
    // puts(c_string3);

    // 字符串粘结&字符长度
    // strcat(c_string1, c_string2);
    // printf("%lu\n", strlen(c_string1));
    // puts(c_string1);

    // // 字符串比较
    // puts("Please input your possword:");
    // gets(c_user_password);
    // puts(c_user_password);
    // if (strcmp(c_password, c_user_password)) // 数组大小对结果有影响
    // {
    //     puts("密码输入错误");
    // }
    // else
    // {
    //     puts("密码输入正确");
    // }

    // 大小转换
    puts(strupr(c_string1));
    puts(strlwr(c_string1));
}
