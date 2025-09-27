#include <stdio.h>
int main(){
int Ls = 1189, Ss = 841;
int i = 0;
do{
 printf("A%d is %d x %d\n", i, Ls ,Ss);
  int temp = Ls;
  Ls = Ss;
  Ss = temp/2;
  i++;
}while(i<=8);
return 0;
}