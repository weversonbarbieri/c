#include <stdio.h>
#include <stdlib.h>



int main()
{
    int x, y;

    printf("Enter 2 numbers:\n");
    scanf("%d", &x);
    scanf("%d", &y);


    while (x != y) {

        if (x < y) {
        printf("Increasing\n");
    } else if (x > y) {
        printf("Decreasing\n");
    }
        printf("Enter more 2 numbers:\n");
        scanf("%d", &x);
        scanf("%d", &y);

    }



    return 0;
}
