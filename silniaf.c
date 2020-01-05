#include <stdio.h>
#include <stdlib.h>
int silnia(int x){
int n, liczba=1;
    for(n=1;n<=x;n++){
        liczba=liczba*n;
       if (n==x) printf("%d\n", liczba);
    }
return liczba;
}
