#include <stdio.h>

int main() {
    int i,t,r;
    i =0 ;
    scanf("%d",&t);
    for (i=1; i<=9;i++){
        r=i*t;
        printf("%d×%d=%d\n",t,i,r);
   }
  }return 0;
}