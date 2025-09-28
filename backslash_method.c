#include <stdio.h>
int main()
{

    // Printing a long string using backslash '\' to continue on the next line
    printf("%s\n", "You have to dream before your dream can come true. \
    ---A.P.J Abdul Kalam");

    // Printing the same string by concatenating string literals automatically
    printf("%s\n", "You have to dream before your dream can come true."
                   "---A.P.J Abdul Kalam");

    return 0;
}

/*
Explanation:
1. In C, a backslash '\' at the end of a line allows a string to continue onto the next line.
2. Adjacent string literals (without any operator) are automatically concatenated by the compiler.
3. Both printf statements will print the same output:
   "You have to dream before your dream can come true. ---A.P.J Abdul Kalam"
4. Using either method helps in formatting long strings in the code for better readability.
*/
