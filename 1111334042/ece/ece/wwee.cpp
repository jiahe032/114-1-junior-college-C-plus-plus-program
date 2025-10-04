#include <stdio.h>
int main(void)
{
	int chn = 0, eng = 0, pcs = 0,sum=0;
	double avg = 0.0;
	printf("請輸入國文成績：\n");
	scanf_s("%d", &chn);
	printf("請輸入英文成績：\n");
	scanf_s("%d", &eng);
	printf("請輸入計概成績：\n");
	scanf_s("%d", &pcs);
	sum = chn + eng + pcs;
	printf("總成績為：%d\n", sum);
	avg = sum / 3.0;
	printf("平均成績為：%f\n", avg);
	if (avg >= 60.0)
		printf("恭喜通過！\n");
	else
		printf("再加油！");
	return 0;
}