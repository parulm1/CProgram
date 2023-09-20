//1.Calculate the Factorial of a Number
#include<stdio.h>
int main()
{
    int num,fact=1,i=1;
    printf("Enter the no. :");
    scanf("%d",&num);
    while (i<=num)
    {
        printf("%d *",i);
        fact*=i;
        i++;
    }
    printf("\b");
    printf("= %d",fact);
}