// 排序算法

#include<stdio.h>

void PrintArray(int iArray[], int iLength); // 打印一维数组
void ChangeTwoNumber(int *iNumber1, int *iNumber2); // 交换数组中2个位置的数
void SelectiveSorting(int iArray[], int iLength);
void BubbleSorting(int iArray[], int iLength);
void ChangeSorting(int iArray[], int iLength);

int main()
{
    int iArray[] = {11, 19, 0, 3, 2, 1, 14, 12, 4, 5, 18, 6, 10, 7, 9, 8, 13, 15, 16, 17};
    int iLength = (int) sizeof(iArray) / sizeof(*iArray);

    puts("*******************     选择法排序     *******************");
    SelectiveSorting(iArray, iLength);
    puts("*******************     冒泡法排序     *******************");
    BubbleSorting(iArray, iLength);
    puts("*******************     交换法排序     *******************");
    ChangeSorting(iArray, iLength);

    return 0;
}

void PrintArray(int iArray[], int iLength)
{
    for (int i=0; i<iLength; i++)
    {
        printf("%d\t", iArray[i]);
    }
    putchar('\n');
}

void ChangeTwoNumber(int *iNumber1, int *iNumber2)
{
    int iTemp = 0;
    iTemp = *iNumber1;
    *iNumber1 = *iNumber2;
    *iNumber2 = iTemp;
}

void SelectiveSorting(int iArray[], int iLength)
{
    int iMin, iPostion;

    for (int i=0; i<(iLength-1); i++)
    {
        iMin = iArray[i];
        iPostion = i;
        // find the minimum among array[i] to array[end]
        for (int j=i; j<iLength; j++)
        {
            if (iMin > iArray[j])
            {
                iMin = iArray[j];
                iPostion = j;
            }
        }
        // change the position between array[i] and minimum
        if (iPostion == i)
        {
            continue;
        }
        else
        {
            iArray[iPostion] = iArray[i];
            iArray[i] = iMin;
        }
    }
    PrintArray(iArray, iLength);
}

void BubbleSorting(int iArray[], int iLength)
{
    for (int i=0; i<(iLength-1); i++)
    {
        for (int j=0; j<(iLength-1-i); j++)
        {
            // change two adjacent numbers
            if (iArray[j] > iArray[j+1])
            {
                ChangeTwoNumber(&iArray[j], &iArray[j+1]);
                // iArray[j] = iArray[j+1] - iArray[j];
                // iArray[j+1] = iArray[j+1] - iArray[j];
                // iArray[j] = iArray[j+1] + iArray[j];
            }
        }
    }
    PrintArray(iArray, iLength);
}

void ChangeSorting(int iArray[], int iLength)
{
    for (int i=0; i<(iLength-1); i++)
    {
        for (int j=i; j<iLength; j++)
        {
            if (iArray[i] > iArray[j])
            {
                ChangeTwoNumber(&iArray[i], &iArray[j]);
                // iArray[i] = iArray[j] - iArray[i];
                // iArray[j] = iArray[j] - iArray[i];
                // iArray[i] = iArray[i] + iArray[j];
            }
        }
    }
    PrintArray(iArray, iLength);
}

