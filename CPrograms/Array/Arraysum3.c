#include<stdio.h>
int main()
{
    int a[3][3];
    int i,j,sum=0;
    printf("Enter the elements :");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    } 
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i+j==1 || i+j==3)
            {
                sum+=a[i][j];
            }   
        }
    } 
    printf("\t %d",sum);     
}
/* sum at    *
           *   *
             *          */