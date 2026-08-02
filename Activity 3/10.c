#include <stdio.h>
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    int g = gcd(x, y);
    int lcm = (x * y) / g;
    printf("GCD of %d and %d = %d\n", x, y, g);
    printf("LCM of %d and %d = %d\n", x, y, lcm);
    if (g == 1)
        printf("%d and %d are Coprime\n", x, y);
    else
        printf("%d and %d are NOT Coprime (GCD = %d)\n", x, y, g);
    return 0;
}
