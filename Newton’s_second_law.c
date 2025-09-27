#include <stdio.h>
float force(float mass);

float force(float mass){
    return (mass*9.8);
}

int main(){
  float m = 33;
    printf("The force of %f is %.2fN ", m , force(m));
    return 0;
}