#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Pierwiastek()
{

    float x;

    printf("Podaj liczbe: ");
    scanf("%f", &x);

    printf("sqrt(%f) = %f", x, sqrt(x));

    return 0;
}
