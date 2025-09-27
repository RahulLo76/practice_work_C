#include <stdio.h>

void change_value(int *, int *); // Prototype

int main()
{
    int a = 4, b = 6;
    printf("The value of\n a = %d\n b = %d\n", a, b);

    change_value(&a, &b);
    printf("Now the value of\n a = %d\n b = %d\n", a, b);
    return 0;
}

void change_value(int *x, int *y)
{ // Defination
    *x = 6;
    *y = 4;
}