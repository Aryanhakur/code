#include <stdio.h>
 float subject1,subject2,subject3,subject4,subject5,sum, average,percentage;
 int sum_total;
int main() {
    printf("it oly for five subject");
   printf("enter marks of subject1 = ");
   scanf("%f",&subject1);
   printf("\nenter marks of subject2 = ");
   scanf("%f",&subject2);
   printf("\nenter marks of subject3 = ");
   scanf("%f",&subject3);
   printf("\nenter marks of subject4 = ");
   scanf("%f",&subject4);
   printf("\nenter marks of subject5 = ");
   scanf("%f",&subject5);
   printf("\nenter sum of total marks = ");
   scanf("%d",&sum_total);
   sum = (subject1+subject2+subject3+subject4+subject5);
   printf(" \nyour total marks obtain are %f\n",sum);
   percentage = ((sum*100)/sum_total);
   printf("your percentage is %2f% \n",percentage);
   average = sum/5;
   printf("your average is = %f \n",average);
    return 0;
}
