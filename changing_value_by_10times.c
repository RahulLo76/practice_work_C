#include <stdio.h>
int ten_times(int *);

int ten_times(int *a)
{
    *a = (*a) * 10;
    return 1;
}

int main()
{
    int x = 6;
    printf("The value of x is %d\n", x);
    ten_times(&x);
    printf("The value of x is now %d\n", x);
    return 0;
}