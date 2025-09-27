#include <stdio.h>

int sum(int *a, int *b);
float avr(int *a, int *b);

int main()
{
    int a = 16, b = 23;
    printf("The sum of both variable is %d\n", sum(&a, &b));
    printf("The average of both variable is %f\n", avr(&a, &b));
    return 0;
}

int sum(int *a, int *b)
{
    int c = *a + *b;
    return c;
}
float avr(int *a, int *b)
{
    float c = (*a + *b) / 2.0;
    return c;
}