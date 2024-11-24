#include <stdio.h>

int main()
{
    int num;
    printf("Nhap vao so thang: ");
    scanf("%d", &num);

    if (num > 0 && num <= 12)
    {
        // if (num == 2)
        //     printf("Thang %d co 28 ngay.", num);
        // else if (num == 1 || num == 3 || num == 5 || num == 7 || num == 8 || num == 10 || num == 12)
        //     printf("Thang %d co 31 ngay.", num);
        // else
        //     printf("Thang %d co 30 ngay.", num);
        switch (num)
        {
        case 2:
            printf("Thang %d co 28 ngay.", num);
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("Thang %d co 31 ngay.", num);
            break;
        default:
            printf("Thang %d co 30 ngay.", num);
            break;
        }
    }
    else
        printf("Thang nhap vao khong hop le.");
}
