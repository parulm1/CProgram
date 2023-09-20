//19. WAP to find the size of int, float, double and char.
#include<stdio.h>
int main()
{
    int I;
    float F;
    double D;
    char C;
    printf("Size of INTEGER is %u bytes",sizeof(I));
    printf("\nSize of FLOAT is %u bytes",sizeof(F));
    printf("\nSize of DOUBLE is %u bytes",sizeof(D));
    printf("\nSize of CHARECTER is %u bytes",sizeof(C));

}