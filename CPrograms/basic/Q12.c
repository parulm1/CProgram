#include<stdio.h>
int main()
{
    float pi=3.14,r,h,surface;
    printf("Enter the radius and height :");
    scanf("%f%f",&r,&h);
    surface=pi*r*h*2;
    printf("Surface of Cylinder = %.2f",surface);
}