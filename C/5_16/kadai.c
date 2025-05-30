#include<stdio.h>

float tyouhoukei(float a,float b);
int main(void){
    float i=tyouhoukei(1.5,4.4);
    printf ("%f",i);
return 0;
}


float tyouhoukei(float a,float b){
float i;
i=a*b;
    return i;  
}