#include <stdio.h>
#include <stdlib.h>

int main(){
int n,x, num=1;
printf("Podaj liczbe z ktorej chcez uzyskac silnie:");
scanf("%d",&x);
    for(n=1;n<=x;n++){
        num=num*n;
      // if (n==x) printf("%d\n", num);
    }
printf("Twoja silnia to: %d", num);
getche();
return 0;
}
