#include <stdio.h>
int main(){
int a = 4;
printf("The value of a is %d %d %d",a,++a,a++);
return 0;
}
//(THE OUTPUT OF THE PROGRAM IS "6 6 4" but some of us guess it like "4 5 5" ).
//( SO HOW "6 6 4"?).
// (It depends on compliler like "GCC" read program from left to right and "MSVC" do it from
//right to left).