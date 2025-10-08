#include <stdio.h>

int main(void)
{
    int chinese = 98, math = 100, cup = 100, toto;
    double avg = 0;
    char rank = 'A';

    printf("請輸入你的國文成績:\n");
    scanf_s("%d", &chinese);
    printf("請輸入你的數學成績:\n");
    scanf_s("%d", &math);
    printf("請輸入你的計概成績:\n");
    scanf_s("%d", &cup);
    toto = chinese + math + cup;
    printf("你學期的總成績是:%d\n", toto);
    avg = (double)toto / 3.0;
    printf("你的學期平均成績是:%f\n", avg);

    if (avg >= 60) {
        printf("恭喜通過！\n");
    }
    else {
        printf("再加油！\n");
    }
    return 0;
}
