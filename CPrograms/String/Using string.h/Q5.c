//5.WAP to compare two strings.
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    char str2[100];
    int com;
    printf("Enter the string 1 : ");
    scanf("%s",&str1);
    printf("Enter the string 2 : ");
    scanf("%s",&str2);
    com=strcmp(str1,str2);
    if(com==0)
    printf("Strings are same");
    else
    printf("\nStrings are not same");
}