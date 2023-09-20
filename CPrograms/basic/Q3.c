#include<stdio.h>
int main()
{
    float si,p,n,r;
    printf("Enter p,n,r : ");
    scanf("%f%f%f",&p,&n,&r);
    si=p*n*r/100;
    printf("SI = %.2f",si);
}