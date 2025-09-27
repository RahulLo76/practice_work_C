// CALL BY REFRENCE ---->
#include <stdio.h>
int sum(int *a, int *b);
// Changing the value of x using call by refrence--->
int sum(int *a, int *b)
{
    *a = 6;
    return *a + *b;
}

int main()
{
    int x = 4, y = 6;
    printf("The value of x is %d\n", x);
    printf("The sum a and b is %d\n", sum(&x, &y));
    printf("The value of x is %d\n", x);
    return 0;
}