#include<stdio.h>
int main()
{
    int a[3][3];
    int i,j;
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
            if(a[i][j]%2==0)
            {
                printf("\t %d",a[i][j]);
            }   
        }
        printf("\n");
    }      
}