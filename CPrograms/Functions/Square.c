#include<stdio.h>
int square(int a)
{
    int num,square;
    printf("Enter the number to find square :");
    scanf("%d",&num);
    square=num*num;
    printf("%d",square);
}
int main()
{
    int s;
    square(s);
}