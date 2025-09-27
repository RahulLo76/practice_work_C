#include <stdio.h>
int main(){
int c ;
printf("Enter the Celsius:\n");
scanf("%d",&c);
float f = (9.0*c)/5.0+32;
printf("The Fahrenheit of %dCelsius--->\n Fahrenheit: %fF",c,f);
return 0;
}