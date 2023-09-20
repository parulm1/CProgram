// total & avg of 5 sub
#include<stdio.h>
int main()
{
    int p,c,m,e,b,sum;
    float avg;
    printf("Enter the marks of 5 subjects :");
    printf("\n1.Physics : ");
    scanf("%d",&p);
    printf("\n2.Chemistry : ");
    scanf("%d",&c);
    printf("\n3.Maths : ");
    scanf("%d",&m);
    printf("\n4.English : ");
    scanf("%d",&e);
    printf("\n5.Biology : ");
    scanf("%d",&b);
    sum=p+c+m+e+b;
    avg=sum/5;
    printf("The total of 5 subjects = %d",sum);
    printf("\nThe average of 5 subjects = %.2f",avg);
}