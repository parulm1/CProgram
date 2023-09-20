#include<stdio.h>
void Add(void)
{
    int a,b;
    printf("Enter no.");
    scanf("%d%d",&a,&b);
    printf("%d",a+b);
}
int main()
{
    Add();
}