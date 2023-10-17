#include <stdio.h>

int main( )

{
    int num, count, a, b, c, d, e=0;
    scanf("%d", &num);
    a=num%10;
    num=num/10;
    b=num%10;
    num=num/10;
    c=num%10;
    num=num/10;
    d=num%10;
    num=num/10;
    e=num;
    if (a==9) {
        count++;
    }
    if (b==9) {
        count++;
    }
    if (c==9) {
        count++;
    }
    if (d==9) {
        count++;
    }
    if (e==9) {
        count++;
    }
    printf("%d\n", count);
}
