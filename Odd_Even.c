#include <stdio.h>
int main()
{
    printf("Enter the value for even or odd\n");
    int n;
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("even --->%d", n);
    }
    else
    {
        printf("odd --> %d", n);
    }
    return 0;
}