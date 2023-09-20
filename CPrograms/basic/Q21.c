//21. Input a four digit number from the keyboard. WAP to obtain sum of first and last digit ofthe number
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
    sum=d1+d4;
    printf("The sum of first and last digit of the number is %d",sum);
    //printf("\nd1=%d\nd2=%d,\nd3=%d,\nd4=%d",d1,d2,d3,d4);
}