#include <stdio.h>
float base, height, area;
int main() {
    printf("enter the length of base = ");
    scanf("%f",&base);
    printf("\n enter the length of height = ");
    scanf("%f",&height);
    area = (base*height)/2;
    printf("\n area of triangle with base %f and height %f is = %f",base,height,area);
    return 0;
}
