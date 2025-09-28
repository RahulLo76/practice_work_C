#include <stdio.h>
int main()
{

    char name[20];
    printf("Enter the Name of the candidate\n");

    // WARNING: gets() is unsafe and can cause buffer overflow.
    // It reads a string from stdin but does not check the array size.
    // Using fgets() is recommended instead of gets().
    gets(name);

    // prints the string entered by the user
    puts(name);

    return 0;
}

/*
Conclusion:
1. gets() reads a string input from the user but is unsafe because it doesn't limit input length.
2. Using gets() can lead to buffer overflow if the user enters more characters than the array can hold.
3. puts() prints the entered string to the output.
4. It is safer to use fgets(name, sizeof(name), stdin) instead of gets()
*/