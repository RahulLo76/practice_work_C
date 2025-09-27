//Is this program will Run till 19?
#include <stdio.h>
int main(){
 int i = 0;
 while (i<20){
    if (i<10){
        printf("The value of i is %d\n",i);
        i++;
    }
 }
return 0;
}

/*This program will not run till 19.

It will print values of i from 0 to 9, then get stuck in an infinite loop because i never changes after 10.*/