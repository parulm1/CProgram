#include<stdio.h>
float Sim_intr(int a)
{
    float si,p,n,r;
    printf("Enter p,n and r to find simple intrest :\n");
    scanf("%f%f%f",&p,&n,&r);
    si=p*n*r/100;
    printf("Simple Intrest = %.2f",si);
}
int main()
{
    int s;
    Sim_intr(s);
}