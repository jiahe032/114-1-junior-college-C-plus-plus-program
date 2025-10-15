#include <stdio.h>

int main() {
    int n;
    double pi = 0.0;
    int i;
    int sign = 1;

    printf("請輸入所需的項目數量 n：");
    scanf_s("%d", &n);

    if (n <= 0) {
        printf("請輸入大於 0 的整數。\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        // 如果是偶數，繼續下一輪，這裡示範 continue
        if (i % 2 == 0) {
            // 計算正項
            pi += 4.0 / (2 * i + 1);
            continue;  // 跳過後面符號反轉
        }

        // 如果是奇數，計算負項
        pi -= 4.0 / (2 * i + 1);
    }

    printf("使用 %d 項計算的 pi 近似值為：%.10f\n", n, pi);

    return 0;
}
