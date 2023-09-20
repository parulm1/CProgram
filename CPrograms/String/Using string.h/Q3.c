//3.WAP to reverse a string using the library function.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter the string : ");
    scanf("%s",str);
    printf("After reverse : %s",strrev(str));
}