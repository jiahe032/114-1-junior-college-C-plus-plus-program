#include <stdio.h>

int main()
{
    double weight;
    int cost;

    printf("請輸入包裹重量（公斤）：");
    scanf_s("%lf", &weight);

    if (weight <= 2.0) {
        cost = 60;
    }
    else {
        double extra = weight - 2.0;
        int extraKg = (int)extra; // 先取整數部分

        // 如果有小數，就多加 1 公斤
        if (extra > extraKg) {
            extraKg += 1;
        }

        cost = 60 + extraKg * 35;
    }

    printf("海運運費為：%d 元\n", cost);

    return 0;
}
