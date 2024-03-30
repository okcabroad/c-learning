//Excercise 1.2.1 Hello World 30/03/24

#include <stdio.h>

int main(void) {
    int a, b, c; 
    printf("Input three intergers: ");
    scanf("%i %i %i", &a, &b, &c);

    int total = ((a + b + c) * 2) + 7;

    printf("Twice the sume of the intergers plus 7 is %i !", total);

    return 0;
}
