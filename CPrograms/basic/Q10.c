#include<stdio.h>
int main()
{
    int a1,a2,a3;
    printf("Enter two angles for getting the third :");
    scanf("%d%d",&a1,&a2);
    a3=180-(a1+a2);
    printf("First angle = %d\nSecond angle = %d\nThird angle = %d",a1,a2,a3);
}