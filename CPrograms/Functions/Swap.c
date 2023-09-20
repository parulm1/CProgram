#include<stdio.h>
int swap(int a,int b)
{
    int x,y;
    printf("Enter the numbers to swap :\n");
    scanf("%d%d",&x,&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("After swap x=%d y=%d",x,y);

}
int main()
{
    int i,j;
    swap(i,j);
}