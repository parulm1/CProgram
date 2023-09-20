//15. WAP to calculate the sum of individual digit of a 4 digit number. (d1=n%10;n=n/10).
#include<stdio.h>
int main()
{
    int d1,d2,d3,d4,num,sum;
    printf("Enter a 4 digit no. : ");
    scanf("%d",&num);
    d1=num%10;
    num=num/10;
    d2=num%10;
    num=num/10;
    d3=num%10;
    num=num/10;
    d4=num;
    sum=d1+d2+d3+d4;
    printf("The sum of individual digit of a 4 digit number is %d",sum);
    //printf("\nd1=%d\nd2=%d,\nd3=%d,\nd4=%d",d1,d2,d3,d4);
}