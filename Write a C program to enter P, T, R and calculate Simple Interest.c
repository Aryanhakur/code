#include <stdio.h>
#include <math.h>

int main() {
    int p, t, n;
    float r, Simple_interest;

    printf("Enter P (initial principal balance): \n");
    scanf("%d", &p);

    printf("Enter r (interest rate): \n");
    scanf("%f", &r);


    printf("Enter t (number of time periods elapsed): \n");
    scanf("%d", &t);

    Simple_interest = p*(1+ r*t);

    printf("Compound Interest is: %.2f\n", Simple_interest);

    return 0;
}
