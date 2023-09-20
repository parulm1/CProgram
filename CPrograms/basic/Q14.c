/* 14. WAP to convert the temperature Fahrenheit degree into degree celcius.
Celsius = ((Fahrenheit - 32) / (1.8)) & Fahrenheit = (1.8* Celsius) + 32 */

#include<stdio.h>
int main()
{
    float c,f,F,C;
    printf("Enter the temperature in celsius : ");
    scanf("%f",&c);
    F=((1.8*c)+32);
    printf("Converted temperature in Fahrenheit is : %.2f",F);
    
    printf("\nEnter the temperature in fahrenheit : ");
    scanf("%f",&f);
    C=((f-32)/(1.8));
    printf("Converted temperature in Celsius is : %.2f",C);
}