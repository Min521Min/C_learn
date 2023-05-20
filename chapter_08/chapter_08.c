//  数组

#include<stdio.h>
#include<string.h>

void OneDimension();
void TwoDimension();
void CharArray();
void CountSpace();

int main()
{
    // printf("------------------   一维数组   ------------------\n");
    // OneDimension();
    // printf("------------------   二维数组   ------------------\n");
    // TwoDimension();
    // printf("------------------   字符数组   ------------------\n");
    // CharArray();
    // printf("------------------   计算空格   ------------------\n");
    // CountSpace();

    return 0;
}

void OneDimension()
{
    int iArray1[6] = {1, 2, 3, 4};
    int iArray2[] = {1, 2, 3, 4};
    int j = 0;

    for (int i=0; i < (sizeof(iArray1) / sizeof(iArray1[0])); i++)
    {
        printf("%d-th value is %d\n", i+1, iArray1[i]);
    }

    do
    {
        printf("%d-th value is %d\n", j+1, iArray2[j]);
        j++;
    } while(j < (sizeof(iArray2) / sizeof(iArray2[0])));
}

void TwoDimension()
{
    int iArray3[ ][3] = {1, 2, 3, 4, 5, 6}; // 必须有列下标
    int iArray4[2][3] = {{1, 2}, {4, 5}}; // 分行赋值
    int i = 0, j = 0;

    while (i < (sizeof(iArray3) / sizeof(iArray3[0][0]) / 3))
    {
        while (j < 3)
        {
            printf("Array3[%d][%d] = %d   ", i+1, j+1, iArray3[i][j]);
            j++;
        }
        j = 0;
        i++;
        putchar('\n');
    }
    putchar('\n');
    for (i=0; i<2; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("Array4[%d][%d] = %d   ", i+1, j+1, iArray4[i][j]);
        }
        putchar('\n');
    }
    putchar('\n');
    printf("iArray4[1] = %d\n", iArray4[1]);
}

void CharArray()
{
    int i = 0;
    char cArray1[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char cArray2[] = {'H', 'e', '\0', 'l', 'l', 'o'};
    char cArray3[] = "Hello";

    printf("strlen(cArray1) = %d\n", strlen(cArray1));
    printf("strlen(cArray2) = %d\n", strlen(cArray2));
    printf("strlen(cArray3) = %d\n", strlen(cArray3));

    printf("sizeof(cArray1) = %d\n", sizeof(cArray1));
    printf("sizeof(cArray2) = %d\n", sizeof(cArray2));
    printf("sizeof(cArray3) = %d\n", sizeof(cArray3));

    printf("cArray2: ");
    for (i; i < sizeof(cArray2); i++)
    {
        printf("%c", cArray2[i]);
    }
    putchar('\n');
    printf("i = %d\n", i);
    printf("cArray2: %s\n", cArray2);
}

void CountSpace()
{
    int iAmount = 0, iSpace = 0;
    char cArray[20];

    puts("请输入待检测的字符串：");
    gets(cArray);

    for (int iIndex = 0; cArray[iIndex] != '\0'; iIndex++)
    {
        iAmount++;
        if (32 == cArray[iIndex])
        {
            iSpace++;
        }
    }

    printf("输入字符串中，共有%d个字符，%d个空格\n", iAmount, iSpace);
}

