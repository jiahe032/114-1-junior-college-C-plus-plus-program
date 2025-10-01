#include <stdio.h>

int main(void)
{
	int 中文 = 0, 英文 = 0,計概=0;
	float avg;
	printf("請輸入你的國文成績:");
	scanf_s("%d", &中文);
	printf("請輸入你的英文成績:");
	scanf_s("%d", &英文);
	printf("請輸入你的計概成績:");
	scanf_s("%d", &計概);
	printf("你的學期成績%d+%d+%d是:%d\n", 中文, 英文,計概, 中文 + 英文 + 計概);
	avg = (float)(中文 + 英文 + 計概) / 3;
	printf("學期平均成績:%f\n", avg);
	if (avg >= 60)
		printf("恭喜通過!");
	else
		printf("再加油!");
	return 0;

}

