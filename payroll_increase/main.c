#include <stdio.h>
#include <stdlib.h>

int main()
{
    double payroll, increased, newpayroll;
    int percentage;

    printf("Enter the payroll: ");
    scanf("%lf", &payroll);

    if (payroll <= 1000) {
        increased = payroll * 0.2;
        newpayroll = payroll + increased;
        percentage = 20;

    } else if (payroll > 1000 && payroll <= 3000) {
        increased = payroll * 0.15;
        newpayroll = payroll + increased;
        percentage = 15;

    }

    printf("The payroll is = $%.2lf\n", newpayroll);
    printf("The amount increased is = $%.2lf\n", increased);
    printf("The percentage is = %d %", percentage);



    return 0;
}
