#include<stdio.h>
int Pal(int a)
{
    int num,n1,n2,n3,temp,s;
    printf("Enter a 3 digit no.");
    scanf("%d",&num);
    temp=num;
    n1=num/100;
    n2=num/10%10;
    n3=num%10;
    s=n3*100+n2*10+n1*1;
    if(temp==s)
    printf("%d is a Palindrome",num);
    else
    printf("%d is Not Palindrome",num);
}
int main()
{
    int p;
    Pal(p);
}