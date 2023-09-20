/* 11. Ramesh’s basic salary is input through the keyboard his DA is 40% of the basic salary
and H.R.A is 25%, P.F=20% and TA is 30% of the basic salary.WAP to calculate the gross
salary and net salary. */
#include<stdio.h>
int main()
{
    float gs,ns,da,hra,pf,ta,bs;
    printf("Enter the basic salary : ");
    scanf("%f",&bs);
    da=0.40*bs;
    hra=0.25*bs;
    ta=0.30*bs;
    pf=0.20*bs;
    gs=bs+hra+da+ta;
    ns=gs-pf;
    printf("Gross Salary = %f\nNet Salary = %f",gs,ns);
}