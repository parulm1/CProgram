//5. WAP to calculate the factorial of a number.
#include<stdio.h>
int fact(int x)
{
    int num,i,f=1;
    printf("Enter a no. to find factorial : ");
    scanf("%d",&num);
    for ( i = 1; i <= num; i++)
    {
        f*=i;
        printf("%d *",i);
    }
    
    printf("\b");
    return f;
}
int main()
{
    int f,F;
    F=fact(f); 
    printf("= %d",F);   
}