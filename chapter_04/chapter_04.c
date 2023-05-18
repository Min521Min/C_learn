// 运算符 & 表达式 & 数据类型转换

#include<stdio.h>

void FuZhi() // 赋值
{
    float fNumber1 = -10.51f;
    int iNumber1 = fNumber1; // 自动类型转换;浮点→整型
    double dNumeber1 = 5 / 2; // 自动类型转换，都是整型，值为2，不是2.5
    int iNumber2 = (int)fNumber1; // 强制类型转换，编译器不再报错，只取整数部分

    printf("赋值\n");
    printf("fNumber1 = %f\n", fNumber1);
    printf("iNumber1 = %d\n", iNumber1);
    printf("dNumber1 = %f\n", dNumeber1);
    printf("iNumber2 = %d\n", iNumber2);
}

void SuanShu() // 算术
{
    int iNumber1 = 3;
    int iNumber2 = -5;
    int iNumber3 = iNumber2 % iNumber1; // 向0取整
    int iNumber4 = ++ iNumber1; // 先加后赋值 -- 亦同
    int iNumber5 = iNumber1 ++; // 先赋值后加 -- 亦同

    printf("算术\n");
    printf("iNumber3 = %d\n", iNumber3);
    printf("iNumber4 = %d\n", iNumber4);
    printf("iNumber5 = %d\n", iNumber5);
    printf("iNumber1 = %d\n", iNumber1);
}

void GuanXi() // 关系
{
    printf("关系\n");
    printf("%d\n", 7 == 5); // 注意与赋值"="相区别
    printf("%d\n", 't' != 'y');
}

void LuoJi() // 逻辑
{
    int iValue1 = 1;
    int iValue2 = 0;
    int iValue3 = -10;

    printf("逻辑\n");
    printf("1&&0 = %d\n", (iValue1 && iValue2));
    printf("1||0 = %d\n", (iValue1 || iValue2));
    printf("!1 = %d\n", (!iValue1));
    printf("将iValue3转换为逻辑假值：%d\n", (!iValue3));
}

void DouHao() // 逗号
{
    int iValue1, iValue2, iValue3, iResult;

    iValue1 = 10;
    iValue2 = 43;
    iValue3 = 26;
    iResult = 0;

    printf("逗号\n");

    iResult = iValue1++, --iValue2, iValue3+4; // 赋值优先级高于逗号
    printf("iResult = %d\n", iResult);

    iResult = (iValue1++, --iValue2, iValue3+4);
    printf("iResult = %d\n", iResult);

    // printf("%d\n", (++iValue1, iValue2++));
    printf("iValue1 = %d\n", iValue1);
    printf("iValue2 = %d\n", iValue2);
    printf("iValue3 = %d\n", iValue3);
    printf("%d, %d, %d\n", (++iValue1, iValue2++), iValue3+iValue1+iValue2+2); // 输出语句中，没有赋值语句，不改变变量的值
    
}

void FuHe() // 复合赋值
{
    int iValue = 7;

    iValue += iValue *= iValue /= iValue - 5;

    printf("复合赋值\n");

    printf("iValue = %d\n", iValue);
}

int main()
{
    FuZhi(); // 赋值
    printf("-----------------------------------\n");
    SuanShu(); // 算术
    printf("-----------------------------------\n");
    GuanXi(); // 关系
    printf("-----------------------------------\n");
    LuoJi(); // 逻辑
    printf("-----------------------------------\n");
    DouHao(); // 逗号
    printf("-----------------------------------\n");
    FuHe(); // 复合赋值

    return 0;
}