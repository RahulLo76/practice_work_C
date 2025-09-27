#include <stdio.h>
int main(){
int age = 22;
int* ptr = &age;
int _age = *ptr;
printf("age = %d\n",age);
printf("_age = %d\n",_age);
printf("ptr = %d\n",ptr);
printf("address of age is = %u\n",&age);
printf("address of ptr is = %u\n",&ptr);
printf("address of _age is = %u\n",&_age);
printf("The address stored in the pointer is = %d\n",**(&ptr));
*ptr+=5;
_age+=5;
printf("Now *ptr is = %d\n",*ptr);
printf("Now _age is = %d\n",_age);
printf("Now age is = %d\n",age);
(*ptr)++;
printf("Now *ptr which has stored address which is = %d\n",*ptr);

return 0;
}