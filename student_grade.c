#include <stdio.h>
int main(
{
float m1,m2,m3,m4,m5;
float total, percentage;
printf("Enter marks of 5 subject:\n");
scanf("%f", &m1);
scanf("%f", &m2);
scanf("%f", &m3);
scanf("%f", &m4);
scanf("%f", &m5);
total = m1+ m2+ m3+ m4+ m5;
percentage = total/5;
printf("total =%.2f\n", total);
printf("percentage =%.2f%%\n", percentage);
return 0;
}
