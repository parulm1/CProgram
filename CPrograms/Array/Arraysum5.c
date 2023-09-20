/* #include<stdio.h>
int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int i,j,sum=0;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            if (i+j==0 || i+j==4 || i>j )
            {
                if(i==j && i>=1 && j>=1)
                    sum+=a[i][j];   
            }
        }
    }
    printf("\tSum of elements at L position : %d",sum);
} */

#include<stdio.h>
int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int i,j,sum=0;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            if(i==2 || j==0)
            sum+=a[i][j];   
        }
    }
    printf("\tSum of elements at L position : %d",sum);
} 