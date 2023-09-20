//3.WAP to print the first and the last character of the string.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[40];
    printf("Enter the string : ");
    scanf("%s",str);
    printf("first letter is %c",str[0]);
    printf("\nLast letter is %c",str[(strlen(str)-1)]);
}