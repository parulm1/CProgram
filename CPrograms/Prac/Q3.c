//To check no. is greater 5 nos
#include<stdio.h>
int main()
{
    int num1,num2,num3,num4,num5;
    printf("Enter 5 no.s :");
    scanf("%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5);

    if(num1>num2)
    {
        if(num1>num3)
        {
            if(num1>num4)
            {
                if(num1>num5)
                printf("%d is greater",num1);
            }
        }
    }
    if(num2>num1)
    {
        if(num2>num3)
        {
            if(num2>num4)
            {
                if(num2>num5)
                printf("%d is greater",num2);
            }
        }
    }
    if(num3>num1)
    {
        if(num3>num2)
        {
            if(num3>num4)
            {
                if(num3>num5)
                printf("%d is greater",num3);
            }
        }
    }if(num4>num1)
    {
        if(num4>num2)
        {
            if(num4>num3)
            {
                if(num4>num5)
                printf("%d is greater",num4);
            }
        }
    }if(num5>num1)
    {
        if(num5>num2)
        {
            if(num5>num3)
            {
                if(num5>num4)
                printf("%d is greater",num5);
            }
        }
    }
}