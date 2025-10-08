#include <stdio.h>

int main(void) {
    double weight = 0.0, height = 0.0, bmi = 0.0;

    printf("請輸入體重（公斤）：\n");
    scanf_s("%lf", &weight);
    printf("請輸入身高（公尺）：\n");
    scanf_s("%lf", &height);

    
    bmi = weight / (height * height);

    
    printf("您的BMI為：%.2f\n", bmi);

    
    if (bmi < 18.5)
        printf("BMI 等級：過輕\n");
    else if (bmi < 24.9)
        printf("BMI 等級：正常\n");
    else if (bmi < 29.9)
        printf("BMI 等級：過重\n");
    else if (bmi < 30.0)
        printf("BMI 等級：輕度肥胖\n");
    else if (bmi < 39.9)
        printf("BMI 等級：中度肥胖\n");
    else
        printf("BMI 等級：重度肥胖\n");

    return 0;
}
