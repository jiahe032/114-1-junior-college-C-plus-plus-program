#include <stdio.h>
int main(void)
{
	// 第一題：算三數
	int first = 0, second = 0, third = 0,sum=0;
	int max, min;
	double avg = 0.0;

	
	printf("請輸入第一個數：\n");
	scanf_s("%d", &first);
	printf("請輸入第二個數：\n");
	scanf_s("%d", &second);
	printf("請輸入第三個數：\n");
	scanf_s("%d", &third);

	max = first;
	min = first;

	sum = first+second+third;
	
	avg = sum / 3.0;
	
	if (second > max)
		max = second;
	if (third > max)
		max = third;

	if (second < min)
		min = second;
	if (third < min)
		min = third;

	printf("總和為：%d\n", sum);
	printf("平均值為：%f\n", avg);
	printf("最大值是：%d\n", max);
	printf("最小值是：%d\n", min);
	return 0;
}