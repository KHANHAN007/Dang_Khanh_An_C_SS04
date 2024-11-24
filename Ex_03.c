#include <stdio.h>

int main()
{
    int num;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &num);

    if (num % 15 == 0)
        printf("So %d chia het cho ca 3 va 5.", num);
    else if (num % 3 == 0)
        printf("So %d chia het cho 3.", num);
    else if (num % 5 == 0)
        printf("So %d chia het cho 5.", num);
    else
        printf("So %d khong chia het cho 3 cung khong chia het cho 5.", num);
}