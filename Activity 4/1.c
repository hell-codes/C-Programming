#include <stdio.h>

int main() {
    float temps[7];
    float sum = 0.0, average;
    int i, Count = 0;

    printf("Enter 7 daily temperatures:\n");
    for (i = 0; i < 7; i++) {
        scanf("%f", &temps[i]);
        sum += temps[i];
    }

    average = sum / 7;

    for (i = 0; i < 7; i++) {
        if (temps[i] > average) {
            Count++;
        }
    }

    printf("Average temperature: %.2f\n", average);
    printf("Days above average: %d\n", Count);

    return 0;
}
