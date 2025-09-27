#include <stdio.h>
int main()
{
    printf("Enter the n\n");
    int n, i = 1;
    scanf("%d", &n);
    do
    {
        printf("\t%d\n", i);
        i++;
    } while (i <= n);
    return 0;
}