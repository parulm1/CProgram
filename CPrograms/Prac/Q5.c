#include<stdio.h>
int main()
{
    int num;
    printf("Enter no. to check :");
    scanf("%d",&num);
    if(num%8==0 && num%5==0)
    {
        printf("%d is divisible by 8 and 5",num);
    }
        
    else if(num%8==0)
    {
        printf("%d is divisible by 8 ",num);
    }

    else if(num%5==0)
    {
        printf("%d is divisible by 5 ",num);
    }

    else 
    {
        printf("%d is not divisible by 8 nor 5",num);
    }
    
        
    
}
