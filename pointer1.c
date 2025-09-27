#include <stdio.h>
int main(){

//Using pointer to print age in diffrent ways------->
int age = 22;
int* ptr = &age;
int _age = *ptr;

printf("age = %d\n",age);
printf("age = %d\n",*ptr);
printf("age = %d\n",_age);

//Adding the value of 5 in age variable by pointer
*ptr +=5;
printf("The age is now %d\n",*ptr);

//incrementing the value by 1
(*ptr)++;
printf("The age is now %d\n",age);


//To find out the address of age------>
printf("The address of age is = %u\n",&age);
printf("Could be also written as = %u\n",*(&ptr));

return 0;
}