#include <stdio.h>
#include <stdlib.h>

int Dzielenie()
{
    int a,b,c;
    printf("Podaj liczby ,ktore chcesz podzielic:\n");
    scanf("%d%d",&a,&b);
    c=a/b;
    printf("Iloraz tych liczb to: %d",c);
    return 0;
}
