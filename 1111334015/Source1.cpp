#include <stdio.h>

int main(void)
{
	int chinese = 0, english = 0, ics = 0;
		int total = 0;
	double avg = 0;

	printf("請輸入你的國文成績:\n");
	scanf("%d", &chinese);
	printf("請輸入你的國文成績:\n");
	scanf("%d", &english);
	printf("請輸入你的計概成績:\n");
	scanf("%d", &ics);

	total = chinese + english + ics;
	avg = total / 3.0;
	printf("你的總成績是: %d\n",total);
	printf("你的平均成績是: %.2f\n", avg);

	if (avg >= 60)
		printf("恭喜通過!\n");
	else
		printf("再加油!\m");

		return 0;


}