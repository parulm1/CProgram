//2.WAP to check greater of four numbers.
#include<stdio.h>
int main()
{
    int a,b,c,d,grater;
    printf("Enter four numbers :");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    if (a>b)
    {
        if(a>c)
        {
            if(a>d)
            grater=a;
            else
            grater=d;
        }
        else
        {
            if (c>a)
            {
                if(c>b)
                {
                    if(c>d)
                    grater=c;
                    else
                    grater=d;
                }
            }

        }
        
    }
    

}