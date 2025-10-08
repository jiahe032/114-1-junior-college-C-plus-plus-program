#include <stdio.h>

int main(void)
{
    int chinese = 0, english = 0, cs = 0; // 國文、英文、計概
    int total = 0;                        // 整數總分
    double avg = 0;                       // 平均分數 (double)

    // 輸入三科成績
    printf("請輸入國文成績:\n");
    scanf_s("%d", &chinese);

    printf("請輸入英文成績:\n");
    scanf_s("%d", &english);

    printf("請輸入計概成績:\n");
    scanf_s("%d", &cs);

    // 計算總分與平均
    total = chinese + english + cs;
    avg = total / 3.0;   // 除以 3.0 避免整數除法

    // 輸出結果
    printf("三科總分 %d+%d+%d = %d\n", chinese, english, cs, total);
    printf("三科平均成績: %f\n", avg); // 保留小數點 
    if (avg >= 60)
    { printf("恭喜通過\n"); }
    else
    { printf("再加油\n");}
    return 0;
}