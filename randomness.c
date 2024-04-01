// Exercise 1.6.1 Write a program that calls rand(), say 500 times, inside a for loop, incre-
// ments the variable minus_cnt every time rand() returns a value less than median. Each
// time through the for loop, print out the value of the difference of plus_cnt and minus_cnt.
// You might think that this difference should oscillate near zero. Does it ?

#include <stdio.h>
#include <stdlib.h>

int main() {
    int median = RAND_MAX / 2; // Median of rand()
    int plus_cnt = 0;
    int minus_cnt = 0;

    for (int i = 0; i < 500; i++) {
        int random_value = rand(); // Generate a random number
        if (random_value < median) {
            minus_cnt++; // Increment minus_cnt if random value is less than median
        } else {
            plus_cnt++; // Increment plus_cnt otherwise
        }
        printf("Difference: %d\n", plus_cnt - minus_cnt);
    }

    return 0;
}
