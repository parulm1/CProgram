#include<stdio.h>
int Add(void)
{
    int a,b,c;
    printf("Enter no. : ");
    scanf("%d%d",&a,&b);
    c=a+b;
    return c;
}
int main()
{
    int ans;
    ans=Add();
    printf("%d",ans);
}