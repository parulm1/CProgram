// Without Parameter With returntype

#include<stdio.h>
int Area(void)
{
    int l,b,area;
    printf("Enter lenth and breadth of rectangle :");
    scanf("%d%d",&l,&b);
    area=l*b;
    return area;
}
int main()
{
    int i;
    i=Area();
    printf("%d",i);
}