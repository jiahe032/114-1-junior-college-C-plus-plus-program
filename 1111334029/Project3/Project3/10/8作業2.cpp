#include<stdio.h>

int main(void)
{
	float high = 0.0;
	float kg = 0.0;
	float BMI = 0.0;
	printf("請輸入身高(公尺):\n");
	scanf_s("%f", &high);
	printf("請輸入體重(公斤):\n");
	scanf_s("%f", &kg);
	BMI = (kg / (high * high));
	printf("BMI值為:%f\n", BMI);
	if (BMI < 18.5)
		printf("體重過輕\n");
	else if (BMI <= 24.9)
		printf("體重正常\n");
	else if (BMI <= 29.9)
		printf("過重\n");
	else if (BMI <= 34.9)
		printf("輕度肥胖\n");
	else if (BMI <= 39.9)
		printf("中度肥胖\n");
	else
		printf("重度肥胖\n");
	
}