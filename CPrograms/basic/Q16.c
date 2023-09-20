//16. WAP to calculate the circumference of the circle. (2*pi*r).
#include<stdio.h>
int main()
{
    int r;
    float c,pi=3.14;
    printf("Enter the radius :");
    scanf("%d",&r);
    c=pi*r*2;
    printf("Circumference of circle = %.2f",c);
}