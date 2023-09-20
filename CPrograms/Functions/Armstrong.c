#include<stdio.h>
int Armst(int i)
{
    int num,temp,n1,n2,n3,a;
    printf("Enter the no. : ");
    scanf("%d",&num);
    temp=num;
    n1=num/100;
    n2=num/10%10;
    n3=num%10;
    a=(n1*n1*n1)+(n2*n2*n2)+(n3*n3*n3);
    if (temp==a)
    {
        printf("%d is an Armstrong no.",num);
    }
    else
    {
        printf("%d is not an Armstrong no.",num);
    }
}
int main()
{
    int a;
    Armst(a);
}