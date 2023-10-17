#include <stdio.h>

int main( )

{
    int n0;
    int n1;
    int n2;
    int n3;
    int n4;
    int n5;
    scanf("%d", &n0);
    n5=n0/10000;
    n0=n0%10000;
    n4=n0/1000;
    n0=n0%1000;
    n3=n0/100;
    n0=n0%100;
    n2=n0/10;
    n1=n0%10;
    printf("%d   %d   %d   %d   %d", n5, n4 ,n3 ,n2 ,n1);
}
