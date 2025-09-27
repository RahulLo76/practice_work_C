// CALL BY VALUE ---->
#include <stdio.h>
int sum(int a, int b);

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int x = 4, y = 6;
    printf("The sum a and b is %d\n", sum(x, y)); // The copy of x and y will go in user function , not x and y itself.
    return 0;
}