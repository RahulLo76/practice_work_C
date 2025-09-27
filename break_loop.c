//break using for loop
#include <stdio.h>
int main(){
int n , i = 0;
printf("Enter the n\n");
scanf("%d",&n);
for (i ; i<n; i++){
   if(i == 6){
      break;
   }
   printf("The value of i is %d\n",i);
}
printf("This loop will end here\n");
return 0;
}