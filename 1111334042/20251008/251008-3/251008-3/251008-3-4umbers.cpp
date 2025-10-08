#include <stdio.h>
// 第三題 比對四個整數
int main(void) {
    int a, b, c, d;
    int temp = 0;

    printf("請輸入四個整數：\n");
    scanf_s("%d %d %d %d", &a, &b, &c, &d);


    if (a < b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a < c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (a < d) {
        temp = a;
        a = d;
        d = temp;
    }


    if (b < c) {
        temp = b;
        b = c;
        c = temp;
    }
    if (b < d) {
        temp = b;
        b = d;
        d = temp;
    }


    if (c < d) {
        temp = c;
        c = d;
        d = temp;
    }

    printf("由大到小排序結果：%d %d %d %d\n", a, b, c, d);

    return 0;
}
