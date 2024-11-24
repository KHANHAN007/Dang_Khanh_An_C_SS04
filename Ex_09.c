#include <stdio.h>

int isLeapYear(int y)
{
    return y % 4 == 0 || (y % 100 == 0 && y % 400 != 0);
}
int main()
{
    int d, m, y;
    printf("Nhap ngay thang nam: ");
    scanf("%d%d%d", &d, &m, &y);

    if (m > 0 && m <= 12)
    {
        int dayOfMonth = 0;
        switch (m)
        {
        case 2:
            dayOfMonth = (isLeapYear(y) ? 29 : 28);
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            dayOfMonth = 31;
            break;
        default:
            dayOfMonth = 30;
            break;
        }
        if (d <= dayOfMonth)
            printf("Ngay thang nhap vao hop le.");
        else
        {
            printf("Ngay thang nam nhap vao khong hop le.");
            return 1;
        }
    }
    else
    {
        printf("Ngay thang nam nhap vao khong hop le.");
        return 1;
    }
    return 0;
}