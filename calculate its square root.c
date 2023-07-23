#include <stdio.h>
#include<math.h>
float number,square_root;
int main() {
    printf("enter number whose square root has to be found");
    scanf("%f",&number);
    square_root = sqrt(number);
    printf("\nsquare root of %f if %f",number,square_root);
    return 0;
}
