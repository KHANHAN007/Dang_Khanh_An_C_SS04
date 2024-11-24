#include <stdio.h>

int main()
{
    int firstNum, secondNum, thirstNum;
    printf("Nhap vao 3 so nguyen: ");
    scanf("%d%d%d", &firstNum, &secondNum, &thirstNum);

    // int min = (firstNum < secondNum) ? ((firstNum < thirstNum) ? firstNum : thirstNum) : ((secondNum < thirstNum) ? secondNum : thirstNum);
    // int max = (firstNum > secondNum) ? ((firstNum > thirstNum) ? firstNum : thirstNum) : ((secondNum > thirstNum) ? secondNum : thirstNum);
    // int mid = (firstNum + secondNum + thirstNum) - (min + max);
    // printf("%d %d %d", min, mid, max);
    int tmp = 0;
    if (firstNum > secondNum)
    {
        tmp = firstNum;
        firstNum = secondNum;
        secondNum = tmp;
    }
    if (firstNum > thirstNum)
    {
        tmp = firstNum;
        firstNum = thirstNum;
        thirstNum = tmp;
    }
    if (secondNum > thirstNum)
    {
        tmp = secondNum;
        secondNum = thirstNum;
        thirstNum = tmp;
    }
    printf("%d %d %d", firstNum, secondNum, thirstNum);
}
