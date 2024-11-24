#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Nhap vao 3 so nguyen: ");
    scanf("%d%d%d", &a, &b, &c);

    int min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
    int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    int mid = (a + b + c) - (min + max);
    printf("%d %d %d", min, mid, max);
    return 0;
}
