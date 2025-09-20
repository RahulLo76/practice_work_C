#include <stdio.h>
//Function Prototype
int sum(int,int);
//Funtion defination
int sum (int x , int y)
{
   // printf("The sum is %d\n",x+y);
    return x+y;
}
int main(){
int a = 1 , b = 2;
int c = sum(a,b);
int d = a + b;
printf("The sum of c is %d\n", c);
int a1 = 44, b1 = 33;
sum(a1,b1);

int a2 =22 , b2 = 33;
sum(a2, b2);
return 0;
}