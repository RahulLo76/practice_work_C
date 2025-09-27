#include <stdio.h>
// finacci series :- 0,1,1,2,3,5,8,13,21,34.........n
int fibonacci(int); // prototype

int fibonacci(int n)
{ // function defination
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n = 5;
    printf("The fibonacci of number %d is %d", n, fibonacci(n));
    return 0;
}
