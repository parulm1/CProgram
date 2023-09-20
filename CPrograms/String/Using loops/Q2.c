//2.WAP to print the vowel in a string.
#include<stdio.h>
int main()
{
    int v=0,c=0,i;
    char str[50],ch;
    printf("Enter any sentence : ");
    scanf("%s",&str);
    printf("Sentence : %s",str);
    for ( i = 0; str[i] !='\0'; i++)
    {
        if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        v++;
        else if(ch==' ')
        continue;
        else
        c++;
    }
    printf("\nVowels : %d",v);
    printf("\nConsonants : %d",c);
    
}