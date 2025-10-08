#include <stdio.h>
int main(void)
{
	int chinese, english ,計概;

	printf("你的國文成績是:");
scanf_s("%d", &chinese);
	
	printf("你的英文成績是:");
scanf_s("%d", &english);
	
	printf("你的計概成績是:");
	scanf_s("%d", &計概);
	printf("你的總成績是:%d\n", chinese+english+ 計概);
	const double avg = (float)(chinese + english + 計概) / 3;
	printf("你的平均成績是:%f\n", avg);
	if (avg >= 60)
	{
		printf("很棒喔");

	}else
	{printf("請在加油");

	}
	return 0;

}
