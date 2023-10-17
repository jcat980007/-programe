#include <stdio.h>

int main( )
{
    float weight, height, BMI;
    printf("Enter your weight:\n");
    scanf("%f",& weight);
    printf("Enter your height:\n");
    scanf("%f",& height);
    BMI=weight/(height/100*height/100);
    printf("BMI is %f\n", BMI);
    printf("BMI VALUES\n");
    printf("Underweight: less than 18.5\n");
    printf("Normal:      between 18.5 and 24.9\n");
    printf("Overweight:  between 25 and 29.9\n");
    printf("Obese:       30 or greater");
}
