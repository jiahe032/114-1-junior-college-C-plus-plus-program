#include <stdio.h>

int main() {
    int fact, n;
    int i, j;
    unsigned long long factorial = 1;  // 用來存階層值
    double e = 1.0; // e 的初始值是 1

    // 輸入一個整數 fact < 13，並計算其階層
    printf("請輸入一個整數 fact（<13）：");
    scanf_s("%d", &fact);

    if (fact >= 13 || fact < 0) {
        printf("錯誤：請輸入 0 到 12 之間的整數。\n");
        return 1;
    }

    // 計算 fact 的階層
    for (i = 1; i <= fact; i++) {
        factorial *= i;
    }

    printf("%d 的階層為：%llu\n", fact, factorial);

    // 輸入項目數 n < 13，並計算 e 的近似值
    printf("請輸入 e 的項目數量 n（<13）：");
    scanf_s("%d", &n);

    if (n >= 13 || n < 1) {
        printf("錯誤：請輸入 1 到 12 之間的整數。\n");
        return 1;
    }

    // 計算 e 的近似值
    for (i = 1; i < n; i++) {
        unsigned long long term_fact = 1;
        for (j = 1; j <= i; j++) {
            term_fact *= j;
        }
        e += 1.0 / term_fact;
    }

    printf("使用 %d 項計算的 e 近似值為：%.10f\n", n, e);

    return 0;
}
