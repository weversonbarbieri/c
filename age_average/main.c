#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age, sumages, Tages;
    double average;
    // Initialize sumages and Tages to 0
    sumages = 0;
    Tages = 0;
    printf("Enter the ages:\n");
    scanf("%d", &age);
    // Check if the first entered age is negative
    if (age < 0) {

            printf("IMPOSSIBLE TO CALCULATE\n");
        } else {
        // While the entered age is positive
        while (age > 0) {
            // Add the entered age to sumages
        sumages = sumages + age;
            // Increment the count of entered ages
        Tages = Tages + 1;
        // Read the next age
        scanf("%d", &age);

    }
    // Calculate the average of the entered ages
    average = (double) sumages / Tages;
    // Print the calculated average
    printf("The average of giving ages is = %.2lf", average);
        }


    return 0;
}
