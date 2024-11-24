#include <stdio.h>

int main()
{
    float a, b, c;
    printf("Nhap ba canh cua tam giac: ");
    scanf("%f%f%f", &a, &b, &c);

    if (a < b + c && b < a + c && c < a + b)
        printf("La 3 canh tam giac");
    else
        printf("Khong phai 3 canh tam giac");
    return 0;
}