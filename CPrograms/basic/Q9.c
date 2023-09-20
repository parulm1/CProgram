#include<stdio.h>
int main()
{
    int a,b,add,sub,mul,mod;
    float div;
    printf("Enter values of a and b : ");
    scanf("%d%d",&a,&b);
    add=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    mod=a%b;
    printf("Add = %d\nSub = %d\nMul = %d\nDiv = %.2f\nMod = %d",add,sub,mul,div,mod);
}