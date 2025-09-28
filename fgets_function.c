#include <stdio.h>
int main(){

    char name[12];
    printf("Enter the Name of the candidate\n");

    // fgets() is used to safely read a string from the user.
    // The second parameter should be the size of the array (here 12) to prevent buffer overflow.
    fgets(name, 12, stdin);

    puts(name);

    return 0;
}

/*
Conclusion:
1. fgets() is used to safely take string input from the user.
2. The second parameter of fgets() should be the size of the array to avoid overflow (here 12).
3. This prevents buffer overflow by limiting the number of characters read.
4. The program will display the candidate's name entered by the user.
*/
