#include <stdio.h>

int main(void)
{
	int chinese = 0, math = 0, score = 0, calculator = 9;
	
	printf("請輸入你的國文成績:");
	scanf_s("%d", &chinese);

	printf("請輸入你的數學成績:");
	scanf_s("%d", &math);

	printf("請輸入你的計概成績:");
	scanf_s("%d", &calculator);

	score = chinese + math + calculator;

	printf("你的學期成績%d+%d+%d是：%d\n", chinese, math, calculator, score);	
	
	float average = (chinese + math + calculator) / 3;
	printf("你的學期平均是：%f\n", average);

	if (average >= 60)
		printf("恭喜通過");
	else
	{
		printf("再加油");
	}
	return 0;
}