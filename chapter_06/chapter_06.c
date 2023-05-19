// 选择结构程序设计

#include<stdio.h>

void IF()
{
    int iAge;

    puts("请输入年龄（周岁）：");
    scanf("%d", &iAge);

    if(13 >= iAge)
    {
        if(4 < iAge)
        {
            puts("儿童");
        }
        else if(2 < iAge)
        {
            puts("正在蹒跚学步");
        }
        else if(0 <= iAge)
        {
            puts("婴儿");
        }
        else
        {
            puts("输入错误！");
        }
    }
    else
    {
        if(20 >= iAge)
        {
            puts("青少年");
        }
        else if(65 >= iAge)
        {
            puts("成年人");
        }
        else if(120 >= iAge)
        {
            puts("老年人");
        }
        else
        {
            puts("真仙人耶！");
        }
    }
}

void FindMax()
{
    int iNumber1 = 0, iNumber2 = 0, iMax = 0;

    puts("Please input 2 integer:");
    scanf("%d, %d", &iNumber1, &iNumber2);

    iMax = (iNumber1 > iNumber2)? iNumber1: iNumber2;

    printf("MaximumValue = %d\n", iMax);
}

void SeasonJudge()
{
    int iMonth;

    puts("Please input the month:");
    scanf("%d", &iMonth);

    switch(iMonth)
    {
        /*多路开关模式*/
        case 3:
        case 4:
        case 5:
            puts("It's spring.");
            break;
        case 6:
        case 7:
        case 8:
        {
            puts("It's sunmer.");
            break;
        }
        case 9:
        case 10:
        case 11:
            puts("It's autumn.");
            break;
        case 12:
        case 1:
        case 2:
            puts("It's winter.");
            break;
        default:
            puts("Error!");
    }
}

int main()
{
    printf("---------------------------------------------\n");
    printf("if条件语句\n");
    IF();
    printf("---------------------------------------------\n");
    printf("三目运算符\n");
    FindMax();
    printf("---------------------------------------------\n");
    printf("Switch条件语句\n");
    SeasonJudge();

    return 0;
}