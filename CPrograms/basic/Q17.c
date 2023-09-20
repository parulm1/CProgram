//17. WAP to compute Quotient and Remainder
#include<stdio.h>
int main()
{
    int num,q,r;
    printf("Enter any number : ");
    scanf("%d",&num);
    r=num%10;
    q=num/10;
    printf("Remainder of no. after dividing by 10 = %d",r);
    printf("\nQuotient of no. after dividing by 10 = %d",q);
}