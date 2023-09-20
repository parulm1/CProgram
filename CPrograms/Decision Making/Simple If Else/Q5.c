//5.WAP to check whether the character is vowel or consonant.
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any charecter : ");
    scanf("%c",&ch);
    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("Entered charecter is vowel");
    }
    else
    {
        printf("Not a vowel");
    }
}