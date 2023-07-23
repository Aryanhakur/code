#include <stdio.h>

float c, f, s, d;

int main() {
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &f);

    d = f - 32;
    s = 5.0 / 9.0;
    c = d * s;

    printf("\nAfter conversion to Celsius: %f\n", c);
    return 0;
}
