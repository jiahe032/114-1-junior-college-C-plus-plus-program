#include <stdio.h>

int main(void)
{
   int chinese , english ,c ;
   float avg = 0;
   printf("請輸入你的國文成績:\n");
   scanf_s("%d", &chinese);
   printf("請輸入你的英文成績:\n");
   scanf_s("%d", &english);
   printf("請輸入你的計概成績:\n");
   scanf_s("%d", &c);
   printf("學期總成績:%d+%d+%d\n",chinese,english,c );
   avg =(float)(chinese + english+c) / 3;
   printf("學期平均成績:%f\n",avg);

if (avg>=60)
{
   printf("恭喜通過!\n");
}
else
{
   printf("再加油!:\n");
}

return 0;
}



