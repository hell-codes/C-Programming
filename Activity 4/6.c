#include <stdio.h>

int main() {
    int scores[50];
    int n, i, j, temp;

    printf("Enter number of players: ");
    scanf("%d", &n);

    printf("Enter %d scores:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    printf("\nBefore sorting: ");
    for (i = 0; i < n; i++) {
        printf("%d ", scores[i]);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (scores[j] < scores[j + 1]) {
                temp = scores[j];
                scores[j] = scores[j + 1];
                scores[j + 1] = temp;
            }
        }
    }

    printf("\nAfter sorting (descending): ");
    for (i = 0; i < n; i++) {
        printf("%d ", scores[i]);
    }

    printf("\nHighest score: %d", scores[0]);
    printf("\nLowest score: %d\n", scores[n - 1]);

    return 0;
}
