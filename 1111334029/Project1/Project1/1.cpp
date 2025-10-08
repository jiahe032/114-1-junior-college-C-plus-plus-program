#include <stdio.h>

int main(void)
{
	int ch = 0, en = 0, mt = 0;
	int all = 0;
	double sa = 0;
	printf("請輸入國文成績:\n");
	scanf_s("%d", &ch);
	printf("請輸入英文成績:\n");
	scanf_s("%d", &en);
	printf("請輸入計概成績:\n");
	scanf_s("%d", &mt);
	all = (ch + en + mt);
	printf("總成績為:%d\n", all);
	sa = (double)(ch + en + mt) / 3;
	printf("平均成績為:%f\n", sa);
	
	if (sa >= 60) 
		printf("恭喜通過!"); 
	else 
		printf("再加油");

		return 0;
}