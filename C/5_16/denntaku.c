#include<stdio.h>

float add(float a,float b);
float add2(float a,float b);
float add3(float a,float b);
int main(void){
    int r;
    float e,t;
    printf("モードを選択してください");
    scanf("%d\n",&r);
    printf("1つ目の数");
    scanf("%f\n",&e);
    printf("2つ目の数");
    scanf("%f\n",&t);
float i=add(e,t);
float j=add2(e,t);
float k=add3(e,t);
if (r==1)
{
    float i=add(e,t);
}
else if(r==2){ 
    float j=add2(e,t);
}
 
else if(r==3){ 
    float k=add3(e,t);
}    
printf ("%f",i);
printf ("%f",j);
printf ("%f",k);
return 0;
}


float add(float a,float b){
float i;
i=a+b;
    return i;  
}
float add2(float a,float b){
float j;
j=a-b;
    return j;  
}
float add3(float a,float b){
float k;
k=a*b;
    return k;  
}