#include<stdio.h>
int EvenOdd(int a)
{
    int num;
    printf("Enter no. to check it is even or odd :");
    scanf("%d",&num);
    if (num%2==0)
    {
        printf("%d is EVEN",num);
    }
    else
    {
        printf("%d is ODD",num);
    }
}
int main()
{
    int x;
    EvenOdd(x);
}