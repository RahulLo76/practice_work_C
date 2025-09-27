#include <stdio.h>
int main()
{
    printf("Enter the Number of the Table you want:\n");
    int n;
    scanf("%d", &n);
    for (int i = 10; i > 0; i--)
    {
        printf("%d X %d = %d\n", n, i, n * i);
    }
    return 0;
}