// 混合运算 数据类型转换

#include<stdio.h>

int main()
{
    int iInt1, iInt2;
    char cChar;
    float fFloat1, fFloat2;
    double dResult;

    iInt1 = 10;
    iInt2 = 6;
    cChar = 'a';
    fFloat1 = 1.5f;
    fFloat2 = 3.2f;

    dResult = iInt1 + cChar - fFloat1 + fFloat2 * iInt2;

    printf("Result = %f\n", dResult);

    return 0;
}