#include <stdio.h>

int main(void)
{
	int chinese, math, IC;
	printf("請輸入你的國文成績:");
	scanf_s("%d", &chinese);
	printf("請輸入你的數學成績:");
	scanf_s("%d", &math);
	printf("請輸入你的計概成績:");
	scanf_s("%d", &IC);
	printf("你的學期總成績是:%d\n", (chinese + math + IC)   );
	double avg = (double)(chinese + math + IC) / 3;
	printf("學期平均成績: % f \n", avg);

	if (avg >= 60) {
		printf("恭喜通過");
	}
	else {
		printf("再加油");
	}
	return 0;

}
