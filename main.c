#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Witaj w kalkulatorze!\n Ktorej funkcji chcesz uzyc?\n 1-Dodawanie\n 2-Odejmowanie 3-Mnozenie\n 4-Dzielenie\n");
    printf("5-silnia\n 6-Pierwiastek\n");
    scanf("%d",&n);
    switch (n) {
        case 1 :
        break;
        case 2 :
        break;
        case 3 :
        break;
        case 4 :
        break;
        case 5 :
        break;
        case 6 :
        break;
        default:
            printf("To nie byla odpowiednia liczba");
            getche();
            return 0;
    }
    return 0;
}
