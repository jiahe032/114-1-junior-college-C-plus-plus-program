#include<stdio.h>

int main()
{

	int	chinese, english, cs;
	int total;
	double average;
	char rank = 'A';
	printf("請輸入國文成績:");
	scanf_s("%d", &chinese);
	printf("請輸入英文成績:");
	scanf_s("%d", &english);
	printf("請輸入計概成績:");
	scanf_s("%d", &cs);

	total = chinese + english + cs;
	average = total / 3.0;
	printf("總成績= %d\n", total);
	printf("平均成績= %.2f\n", average);
	if (average >= 60)
		printf("恭喜通過\n");
	else
		printf("再加油\n");

	
	printf("你的級距是: %c", rank);
	
	return 0;
}


	







