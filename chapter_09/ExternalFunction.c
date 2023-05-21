// 外部函数

#include<stdio.h>

extern int Factorial(int iTerm) // 计算iTerm阶的阶乘
{
    int iResult = 1;

    if (1 >= iTerm)
    {
        return 1;
    }
    else
    {
        for (iTerm; 1<iTerm; iTerm--)
        {
            iResult *= iTerm;
        }
        return iResult;
    }
}