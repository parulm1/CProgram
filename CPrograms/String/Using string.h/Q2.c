//2.WAP to find the length of the string using the library function.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter the string : ");
    scanf("%s",str);
    
    printf("Length = %ld",strlen(str));
}