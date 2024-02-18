#include <stdio.h>
#include <stdlib.h>

int main()
{
    int distance;
    double avarage, Fspent;

    printf("Distance traveled: ");
    scanf("%d", &distance);
    printf("Fuel Spent: ");
    scanf("%lf", &Fspent);

    avarage = (double) distance / Fspent;

    printf("Fuel Avarage = %.3lf", avarage);



    return 0;
}
