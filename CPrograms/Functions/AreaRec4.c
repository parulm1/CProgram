// Without Parameter Without returntype
#include<stdio.h>
int Area(void)
{
    int l,b,area;
    printf("Enter lenth and breadth of rectangle :");
    scanf("%d%d",&l,&b);
    area=l*b;
    printf("%d",area);
}
int main()
{
    Area();
}