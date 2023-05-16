#include<stdio.h> // 头文件

#define Height 10 // 定义常量

int calculate(int Long, int Width); // 声明用户自定义的函数

int main()
{
    int m_Long;
    int m_Width;
    int result;

    printf("长方体的高度为：%d.\n", Height);

    printf("请输入长度：");
    scanf("%d", &m_Long);

    printf("请输入宽度：");
    scanf("%d", &m_Width);

    result = calculate(m_Long, m_Width);
    printf("长方体的体积：%d.\n", result);

    return 0;
}

int calculate(int Long, int Width) // 自定义函数 --- 计算体积
{
    int result;

    result = Long * Width * Height;
    
    return result;
}