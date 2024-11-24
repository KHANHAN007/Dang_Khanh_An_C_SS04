#include <stdio.h>

int main()
{
    int num;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &num);

    // if (num > 0)
    // {
    //     printf("So %d la so duong", num);
    // }
    // else if (num == 0)
    // {
    //     printf("So %d khong phai so am cung khong phai la so duong", num);
    // }
    // else
    // {
    //     printf("So %d la so am", num);
    // }

    switch ((num > 0) - (num < 0))
    {
    case 1:
        printf("So %d la so duong", num);
        break;
    case 0:
        printf("So %d khong phai so am cung khong phai la so duong", num);
        break;
    case -1:
        printf("So %d la so am", num);
        break;
    }
    return 0;
}