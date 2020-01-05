#include <stdio.h>
#include <stdlib.h>
int silnia(int x){
int n, num=1;
    for(n=1;n<=x;n++){
        num=num*n;
       if (n==x) printf("%d\n", num);
    }
return num;
}
