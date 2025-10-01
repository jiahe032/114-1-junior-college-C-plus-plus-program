#include <iostream>

int main()
{
	int chinese , math, score ;
	
	char rank = 'A';
	printf("你的國文成績是:");
    scanf_s("%d", &chinese);
	
	printf("你的數學成績是:");
	scanf_s("%d", &math);
	
	printf("你的計概成績是:");
    scanf_s("%d", &score);
    float avg = ((float)chinese + math+score) / 3;
	printf("你的學期總成績是:%d+%d+%d=%d\n", score , chinese , math, score+chinese+math);
	printf("你的學期平均成績是:%.3f\n",  avg);
	printf("你的級距是:%c"  , rank);
	return 0;


}