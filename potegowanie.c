#include <stdio.h>
#include <stdlib.h>

    int potegowana, potega;
    unsigned long long wynik=1;
    printf("\nPodaj liczbe ktora chcesz podniesc do potegi: ");
    scanf("%d", &potegowana);

    printf("\nPodaj do ktorej potegi chcesz podniesc liczbe: ");
    scanf("%d",&potega);

    for(int i=0; i<potega; i++)
    wynik = wynik * potegowana;


    printf("\n Wynik = %llu",wynik);

    return 0;
