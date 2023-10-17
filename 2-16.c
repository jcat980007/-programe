#include <stdio.h>

int main( )


{
    float n1=0;
    float n2=0;
    printf("Please enter number:");
    scanf("%f", &n1);
    printf("Please enter number:");
    scanf("%f", &n2);
    printf("%f+%f=%f\n", n1, n2, (n1+n2));
    printf("%f-%f=%f\n", n1, n2, (n1-n2));
    printf("%f*%f=%f\n", n1, n2, (n1*n2));
    printf("%f/%f=%f\n", n1, n2, (n1/n2));

}
