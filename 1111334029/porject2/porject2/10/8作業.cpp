#include <stdio.h>

int main(void)
{
	int n1 = 0, n2 = 0, n3 = 0;
	int all = 0;
	double sa = 0;
	printf("請輸入第一個整數:\n");
	scanf_s("%d", &n1);
	printf("請輸入第二個整數:\n");
	scanf_s("%d", &n2);
	printf("請輸入第三個整數\n");
	scanf_s("%d", &n3);
	all = (n1 + n2 + n3);
	printf("數字總和為:%d\n", all);
	sa = (double)(n1 + n2 + n3) / 3;
	printf("平均值為:%f\n", sa);
}