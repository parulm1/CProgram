//1.WAP to check greater of 3 numbers.
#include<stdio.h>
int main()
{
    int a,b,c,large;
    printf("Enter three numbers :");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if (a>c)
        large=a;
        else
        large=c;
    }
    else
    {
        if (b>a)
        {
            if(b>c)
            large=b;
            else
            large=c;
        }
    }
    if(c>a)
    {
        if(c>b)
        large=c;
        else
        large=b;
    }
    else
    {
        if(c>b)
        {
            if(c>a)
            large=c;
            else
            large=a;
        }
    }
    printf("%d is greater",large);
}