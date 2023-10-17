#include <stdio.h>

int main( )

{
    int n1;
    int n2;
    int n3;
    printf("Enter three different integers:");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    int sum = n1+n2+n3;
    int average = (n1+n2+n3)/3;
    int product = n1*n2*n3;
    printf("Sum is %d\n", sum);
    printf("Average is %d\n", average);
    printf("Product is %d\n", product);
    if (n1 > n2) {
        if (n3 > n1) {
            printf("Smallest is %d\n", n2);
            printf("Largest is %d\n", n3);
        }
        else {
            printf("Smallest is %d\n", n2);
            printf("Largest is %d\n", n1);
            }
    }
    if (n1 < n2) {
        if (n2 > n3) {
            printf("Smallest is %d\n", n1);
            printf("Largest is %d\n", n2);
        }
        else {
            printf("Smallest is %d\n", n1);
            printf("Largest is %d\n", n3);
        }
    }
    if (n3 < n2) {
        if (n2 < n1) {
            printf("Smallest is %d\n", n3);
            printf("Largest is %d\n", n1);
        }
        else {
            printf("Smallest is %d\n", n3);
            printf("Largest is %d\n", n2);
            }
    }

}
