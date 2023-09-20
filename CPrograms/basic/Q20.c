//20. Input a four digit number from the keyboard. WAP to reverse that number
#include<stdio.h>
int main()
{
    int num,i,d1,d2,d3,d4,rev;
    printf("Enter a four digit no. : ");
    scanf("%d",&num);
    i=num;
    d4=i%10;i=i/10;
    d3=i%10;i=i/10;
    d2=i%10;i=i/10;
    d1=i%10;i=i/10;  
    rev=d4*1000+d3*100+d2*10+d1;
    printf("Reverse order of %d is : %d\n",num,rev);
}