#include<stdio.h>
int main()
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
    printf("Palindrome");
    else
    printf("Not Palindrome");
}