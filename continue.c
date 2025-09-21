#include <stdio.h>

int main() {
    int n, i = 0;
    scanf("%d", &n);
    for (i; i <= n; i++) {
        if (i == 5) {
            continue;
        }
        printf("The value of i is %d\n", i);
    }
    printf("This loop will end here\n");
    return 0;
}
