// 循环控制

#include<stdio.h>

/*函数申明*/
void GeometricSeriesSummationWhile(int iInitialValue, int iCommonRatio, int iAmount);
void GeometricSeriesSummationDoWhile(int iInitialValue, int iCommonRatio, int iAmount);
void GeometricSeriesSummationFor(int iInitialValue, int iCommonRatio, int iAmount);
void Print();

int main()
{
    int iA0, iQ, iN, iResult;

    // puts("Please input the initial value:");
    // scanf("%d", &iA0);
    // puts("Please input the common ratio:");
    // scanf("%d", &iQ);
    // puts("Please input the Amount:");
    // scanf("%d", &iN);

    // puts("---------------等比数列求和 while----------------");
    // GeometricSeriesSummationWhile(iA0, iQ, iN);
    // puts("-------------等比数列求和 do...while-------------");
    // GeometricSeriesSummationDoWhile(iA0, iQ, iN);
    // puts("----------------等比数列求和 for-----------------");
    // GeometricSeriesSummationFor(iA0, iQ, iN);
    puts("-----------------打印乘法口诀表------------------");
    Print();


    return 0;
}

void GeometricSeriesSummationWhile(int iInitialValue, int iCommonRatio, int iAmount)
{
    int i = 0, iSum = 0;

    while(i <= iAmount)
    {
        if(0 == i)
        {
            iSum = iInitialValue;
            i++; // 计数递增，否则会一直循环
            continue;
        }
        iInitialValue *= iCommonRatio;
        iSum += iInitialValue;
        i++; // 计数递增，否则会一直循环
    }
    
    printf("Result = %d\n", iSum);
}

void GeometricSeriesSummationDoWhile(int iInitialValue, int iCommonRatio, int iAmount)
{
    int i = 1, iSum = iInitialValue;

    do
    {
        iInitialValue *= iCommonRatio;
        iSum += iInitialValue;
        i++;
    } while (i <= iAmount);

    printf("Result = %d\n", iSum);
    
}

void GeometricSeriesSummationFor(int iInitialValue, int iCommonRatio, int iAmount)
{
    int iSum = iInitialValue;

    for (int i = 1; i <= iAmount; i++) /*注意内部3个语句的省略、逗号应用及用分号间隔*/
    {
        iInitialValue *= iCommonRatio;
        iSum += iInitialValue;
    }

    printf("Result = %d\n", iSum);
}

void Print()
{
    for (int col = 1; col < 10; col++)
    {
        for (int row = 1; row <= col; row++)
        {
            printf("%d x %d = %2d   ", col, row, row * col);
        }
        putchar('\n');
    }
}