//4.WAP to copy a string into another string.
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    char str2[100];
    printf("Enter the string 1 : ");
    scanf("%s",str1);
    strcpy(str2,str1);
    printf("String 1 = %s",str1);
    printf("\nString 2 = %s",str1);
}