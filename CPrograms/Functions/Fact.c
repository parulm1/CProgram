#include<stdio.h>
int fact(int a)  //int fact(int a, int b, int c)
{
    int i,num,fact=1;
    printf("Enter the no. to find FACTORIAL : ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        fact*=i;
        printf(" %d",fact);
    }
}
int main()
{
    int x;       //int x,y,z;
    fact(x);     //fact(x,y,z);
}