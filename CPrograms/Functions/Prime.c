#include<stdio.h>
int prime(int a)
{
    int num,i,count=0;
    printf("Enter the no. :");
    scanf("%d",&num);
    for(i=2;i<=num;i++)
    {
        if(num%i==0)
        {
            count++;
        } 
    }
    if (count==1)
    {
        printf("%d is a prime number",num);
    }
    else
    {
        printf("%d is not a prime number",num);
    }
}
int main()
{
    int p;
    prime(p);
}