// 常用的数据输入/输出语句

#include<stdio.h>

void ZiFu()
{
    char cChar;

    printf("输入字符\n");
    printf("请输入一个字符：");
    cChar = getchar();
    putchar(cChar);
    putchar('\n');
    putchar(getchar()); // 回车符
    putchar('\n');
}

void Puts()
{
    char* cChar = "I love China!";

    printf("输出字符串\n");
    puts("I love China!"); // 不用换行符，会自动在字符串常量末尾添加'\0'
    puts("I \0love China!");
    puts(cChar);
    cChar = "I love \0China!";
    puts(cChar);
}

void Gets()
{
    char cAccount[20], cPassword[20];

    puts("输出字符串");

    puts("请输入账号");
    gets(cAccount); // 将最后的换行符转化为终止字符
    puts("请输入密码");
    gets(cPassword);

    puts("注册完成，信息如下：");
    puts("您输入的账号为：");
    puts(cAccount);
    puts("您输入的密码为：");
    puts(cPassword);
}

void Printf() // 格式化输出
{
    long iLong = 100000;
    char *Str = "MingRi"; // 定义字符数组

    printf("格式化输出 printf\n");

    printf("Long = %ld\n", iLong);
    printf("String = %s KeJi\n", Str);
    printf("String = %5s KeJi\n", Str); // 宽度为5，右对齐，左补空，小于实际长度时没有作用
    printf("String = %-10s KeJi\n", Str); // 左对齐
    printf("String = %10.2s KeJi\n", Str); // 截取2个字符右对齐输出
    printf("String = %-10.2s KeJi\n", Str);
    printf("LOcation = %p\n", Str); // 取出字符数组地址 与&Str的区别？
}

void Scanf() // 格式化输入
{
    float fHeight, fWeight;
    double dBMI;
    char sState[10];

    printf("格式化输入 scanf\n");

    puts("请输入身高(cm)、体重(kg)：");
    scanf("%f %f", &fHeight, &fWeight);
    dBMI = fWeight / (fHeight * fHeight);
    puts("请输入自测结果：");
    scanf("%s", &sState);

    printf("BMI = %f\n", dBMI);
    printf("自测结果： %s\n", sState);
}

void SwapTwoNumber() // 交换2个数
{
    int iNumber1, iNumber2;

    puts("请输入待交换位置的2个数：");
    scanf("%d %d", &iNumber1, &iNumber2);

    iNumber1 = iNumber2 - iNumber1;
    iNumber2 = iNumber2 - iNumber1;
    iNumber1 = iNumber1 + iNumber2;

    printf("iNumber1 = %d, iNumber2 = %d\n", iNumber1, iNumber2);
}

void TransferCapitalSmall() // 大小写字母转换
{
    char cCpital, cSmall;

    puts("大小写字母转换");

    puts("请输入英文小写字母：");
    scanf("%c", &cSmall);
    cCpital = cSmall - 32;
    printf("%c的大写形式是%c\n", cSmall, cCpital);
}

int main()
{
    
    // 输出字符
    putchar('\131'); // 八进制
    putchar('\n');

    printf("-------------------------------------\n");
    ZiFu(); // 输入字符
    printf("-------------------------------------\n");
    Puts(); // 输出字符串
    printf("-------------------------------------\n");
    Gets(); // 输入字符串
    printf("-------------------------------------\n");
    Printf(); // 格式化输出
    printf("-------------------------------------\n");
    Scanf(); // 格式化输入
    printf("-------------------------------------\n");
    SwapTwoNumber(); // 交换2个数
    printf("-------------------------------------\n");
    TransferCapitalSmall(); // 大小写字母转换

    return 0;
}