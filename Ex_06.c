#include <stdio.h>

int main()
{
    float oldIdx, newIdx, totalAmount;
    printf("Nhap chi so cong to dien dau thang va chi so cong to dien cuoi thang: ");
    scanf("%f%f", &oldIdx, &newIdx);

    float totalConsumption = newIdx - oldIdx;

    if (totalConsumption < 0)
    {
        printf("Cac chi so nhap vao khong hop le.");
        return 1;
    }
    if (totalConsumption < 50)
        printf("Tien dien tieu thu: %.2f", totalConsumption * 10000);
    else if (totalConsumption < 100)
        printf("Tien dien tieu thu: %.2f", 50 * 10000 + (totalConsumption - 50) * 15000);
    else if (totalConsumption < 150)
        printf("Tien dien tieu thu: %.2f", 50 * 10000 + 50 * 15000 + (totalConsumption - 100) * 20000);
    else if (totalConsumption < 200)
        printf("Tien dien tieu thu: %.2f", 50 * 10000 + 50 * 15000 + 50 * 20000 + (totalConsumption - 150) * 25000);
    else
        printf("Tien dien tieu thu: %.2f", 50 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (totalConsumption - 200) * 30000);
}