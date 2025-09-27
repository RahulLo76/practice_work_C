#include <stdio.h>
int main()
{
    int i = 5;
    printf("The value of i is %d\n", i); // 5
    i = i + 5;
    printf("The value of i is %d\n", i); // 10

    printf("The value of i is %d\n", i++); // 10
    printf("The value of i is %d\n", i);   // 11

    i += 2;
    printf("The value of i is %d\n", i); // 13
    ++i;
    printf("The value of i is %d\n", i); // 14
    return 0;
}