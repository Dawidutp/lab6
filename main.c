#include <stdio.h>
#include <stdlib.h>
#include "dodawanie.c"
#include "odejmowanie.c"
#include "mnozenie.c"
#include "dzielenie.c"
#include "pierwiastek.c"
#include "potegowanie.c"
#include "silnianp.c"




int main()
{
    int n;
    printf("Witaj w kalkulatorze!\n Ktorej funkcji chcesz uzyc?\n 1-Dodawanie\n 2-Odejmowanie\n 3-Mnozenie\n 4-Dzielenie\n");
    printf(" 5-Silnia\n 6-Pierwiastek\n");
    scanf("%d",&n);
    switch (n) {
        case 1 :
            Dodawanie();
        break;
        case 2 :
            odejmowanie();
        break;
        case 3 :
            Mnozenie();
        break;
        case 4 :
            Dzielenie();
        break;
        case 5 :
            silnia();
        break;
        case 6 :
            Pierwiastek();
        break;
        default:
            printf("To nie byla odpowiednia liczba");
            getche();
            return 0;
    }
    return 0;
}
