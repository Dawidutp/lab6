#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iloscLiczb;

    printf("Podaj ile liczb chcesz pomnozyc: ");
    scanf("%d", &iloscLiczb);

    float liczby[iloscLiczb], wynik=1;

    for(int i=0; i<iloscLiczb; i++)
    {
        printf("Podaj %d liczbe: ",i+1);
        scanf("%f", &liczby[i]);
    }

    printf("%.0f ",wynik);

    for(int i=0; i<iloscLiczb; i++)
    {
        wynik = wynik * liczby[i];
        printf("* %.2f ", liczby[i]);
    }
    printf(" = %f",wynik);


    return 0;
}
