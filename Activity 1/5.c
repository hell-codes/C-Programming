#include <stdio.h>

int main() 
{
    int m1, m2, m3, m4, m5, total;
    float avg, percentage;

    printf("Enter marks for 5 subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    avg = total / 5.0;
    percentage = (total / 500.0) * 100;

    printf("Total Marks: %d\n", total);
    printf("Average Marks: %.2f\n", avg);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
