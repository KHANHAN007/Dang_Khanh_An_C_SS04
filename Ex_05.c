#include <stdio.h>

int main()
{
    int firstNum, secondNum, thirdNum;
    printf("Nhap vao 3 so nguyen: ");
    scanf("%d%d%d", &firstNum, &secondNum, &thirdNum);

    if ((thirdNum > (firstNum < secondNum ? firstNum : secondNum)) &&
        (thirdNum < (firstNum > secondNum ? firstNum : secondNum)))
        printf("So %d nam trong khoang giua %d va %d", thirdNum, firstNum, secondNum);
    else
        printf("So %d khong nam trong khoang giua %d va %d", thirdNum, firstNum, secondNum);
}