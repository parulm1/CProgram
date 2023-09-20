#include<stdio.h>
int main()
{
    int arr[2][2];
    int i,j;
    printf("Enter elements of matrix :");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }    
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                printf("\t%d",arr[i][j]);
            }
            printf("\n");
        }   
}