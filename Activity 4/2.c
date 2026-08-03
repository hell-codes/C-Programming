#include <stdio.h>

int main() {
    int marks[50];
    int n, i;
    int dist = 0, first = 0, second = 0, pass = 0, fail = 0;

    printf("Enter number of students (max 50): ");
    scanf("%d", &n);

    printf("Enter %d marks:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }

    for (i = 0; i < n; i++) {
        if (marks[i] >= 80) {
            dist++;
        } else if (marks[i] >= 60) {
            first++;
        } else if (marks[i] >= 45) {
            second++;
        } else if (marks[i] >= 35) {
            pass++;
        } else {
            fail++;
        }
    }

    printf("\n--- Grade Distribution ---\n");
    printf("Distinction  (80-100): %d\n", dist);
    printf("First Class   (60-79): %d\n", first);
    printf("Second Class  (45-59): %d\n", second);
    printf("Pass          (35-44): %d\n", pass);
    printf("Fail          ( 0-34): %d\n", fail);

    return 0;
}
