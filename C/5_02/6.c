 #include<stdio.h>

 int main () {
    int t,i,w;
    scanf("%d",&w);
    i =0 ;
    t=0;
    for (t=1; t<=w/2;t++){
    i=t*2+i;
        printf("%d\n",t*2);
   }
   printf("%d",i);
    return 0;
}
