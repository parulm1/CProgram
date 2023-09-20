//4.WAP to print the reverse of the string.
#include<stdio.h>
#include<string.h>
int main()
{
    int i,len;
    char str[30],temp;
    printf("Enter the string : ");
    scanf("%s",&str);
    len=strlen(str)-1;
        for(i=0;i<len-1;i++)
        {
            temp=str[i];
            str[i]=str[len];
            str[len--]=temp;
        }
    printf("Reverse of string : %s",str);
    
}