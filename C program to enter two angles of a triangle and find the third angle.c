#include <stdio.h>
float angle1, angle2, angle3;
int main() {
    printf("enter the angle1 of triangle");
    scanf("%f",&angle1);
     printf("\nenter the angle2 of triangle");
    scanf("%f",&angle2);
    angle3 = (180-(angle1+angle2));
    printf("\nthird angle is %f",angle3);
    
    return 0;
}
