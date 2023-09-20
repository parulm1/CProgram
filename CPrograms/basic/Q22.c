//22. WAP to calculate the perimeter of the rectangle.(2*(l+b)).

#include<stdio.h>
int main()
{
    int l,b,perimeter;
    printf("Enter length and breadth : ");
    scanf("%d%d",&l,&b);
    perimeter=2*(l+b);
    printf("Perimeter = %d",perimeter);
}