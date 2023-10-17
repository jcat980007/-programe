#include <stdio.h>

int main( )

{
    int second;
    printf("Enter time:\n");
    scanf("%d", &second);
    int minute = second/60%60;
    int hour = second/60/60;
    second = second%60;
    printf("%d: %d: %d", hour, minute, second);
}
