// 函数

#include<stdio.h>
#include "ExternalFunction.c" // 引用外部函数

/*函数申明*/
void Sum();
int InputInteger();
int Fabonacci(int iTerm);
extern int Factorial(int iTerm); // 外部函数

int main()
{
    // puts("~~~~~~~~~~~~~~~~     求和函数     ~~~~~~~~~~~~~~~~");
    // Sum();
    // puts("~~~~~~~~~~~~~~~~     递归调用     ~~~~~~~~~~~~~~~~");
    // int iTerm = InputInteger();
    // printf("Febonacci(%d) = %d\n", iTerm, Fabonacci(iTerm));
    puts("~~~~~~~~~~~~~~~~     外部函数     ~~~~~~~~~~~~~~~~");
    printf("10! + 11! + 12! + 13! + 14! = %d\n", Factorial(10)+Factorial(11)+Factorial(12)+Factorial(13)+Factorial(14));

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


