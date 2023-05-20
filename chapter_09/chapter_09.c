// 函数

#include<stdio.h>
/*函数申明*/
int Sum(int iNumber1, int iNumber2);

int main()
{
    int a = 0, b = 0, iRet;

    puts("Please input 2 integers:");
    scanf("%d, %d", &a, &b);

    iRet = Sum(a, b);
    printf("Result = %d\n", iRet);

    return 0;
}

int Sum(int iNumber1, int iNumber2)
{
    int iSum = 0;

    iSum = iNumber1 + iNumber2;

    return iSum;
}