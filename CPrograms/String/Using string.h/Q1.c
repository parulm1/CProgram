//1.WAP to concatenate two strings.
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    puts("Enter string 1 : ");
    gets(str1);
    puts("Enter string 2 : ");
    gets(str2);
    strcat(str1,str2);
    printf("Combined two strings = '%s'\n",str1);

}