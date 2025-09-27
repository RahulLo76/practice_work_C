#include <stdio.h>
int main()
{
    int i = 5;
    int *ptr = &i;
    int *pptr = &ptr;
    printf("The value of i is %d\n", *pptr);
    printf("The value of i is %d\n", &i);
    printf("The value of i is %d\n", &ptr);

    return 0;
}