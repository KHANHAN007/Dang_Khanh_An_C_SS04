#include <stdio.h>

int main()
{
    int y;
    scanf("%d", &y);

    if (y % 4 == 0 || (y % 100 == 0 && y % 400 != 0))
        printf("Nam %d la nam nhuan.", y);
    else
        printf("Nam %d khong phai nam nhuan.", y);
}