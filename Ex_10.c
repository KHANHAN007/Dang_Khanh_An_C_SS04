#include <stdio.h>

int main()
{
    int firstNum, secondNum, thirdNum;
    printf("Nhap vao 3 so nguyen: ");
    scanf("%d%d%d", &firstNum, &secondNum, &thirdNum);

    int min = (firstNum < secondNum) ? ((firstNum < thirdNum) ? firstNum : thirdNum) : ((secondNum < thirdNum) ? secondNum : thirdNum);
    int max = (firstNum > secondNum) ? ((firstNum > thirdNum) ? firstNum : thirdNum) : ((secondNum > thirdNum) ? secondNum : thirdNum);
    int mid = (firstNum + secondNum + thirdNum) - (min + max);
    printf("%d %d %d", min, mid, max);
    // int tmp = 0;
    // if (firstNum > secondNum)
    // {
    //     tmp = firstNum;
    //     firstNum = secondNum;
    //     secondNum = tmp;
    // }
    // if (firstNum > thirdNum)
    // {
    //     tmp = firstNum;
    //     firstNum = thirdNum;
    //     thirdNum = tmp;
    // }
    // if (secondNum > thirdNum)
    // {
    //     tmp = secondNum;
    //     secondNum = thirdNum;
    //     thirdNum = tmp;
    // }
    // printf("%d %d %d", firstNum, secondNum, thirdNum);
}
