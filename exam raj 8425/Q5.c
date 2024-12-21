#include<stdio.h>

int main()
{
  float radius,area;
  const float pi=3.14;

printf("enter area of circle:- ");
scanf("%f",&radius);

area = pi * radius * radius;

printf("the area of circle:- %.2f\n", area);
return 0;
}