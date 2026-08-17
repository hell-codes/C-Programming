#include <stdio.h>
int main()
{
    float salary, tax;

    printf("Enter annual basic salary: ");
    scanf("%f", &salary);

    if (salary < 150000)
        tax = 0;
    else if (salary <= 300000)
        tax = salary * 0.20;
    else
        tax = salary * 0.30;

    printf("Income Tax = %.2f", tax);

    return 0;
}
