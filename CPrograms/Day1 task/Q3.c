#include<stdio.h>
//typedef enum{ADD=1,SUBSTRACT,MULTIPLY,DIVIDE}CALCULATE;
int main()
{
    int num1,num2,calculate;
    //CALCULATE calculate;
    printf("Enter the case no. : \n 1 Addition \n 2 Substract \n 3 Multiply \n 4 Divide\n");
    scanf("%d",&calculate);
    switch(calculate)
    {
        case 1:
            printf("Enter two no. : ");
            scanf("%d%d",&num1,&num2);
            printf("Addition = %d\n",num1+num2);
            break;
        case 2:
            printf("Enter two no. : ");
            scanf("%d%d",&num1,&num2);
            printf("Substraction = %d\n",num1-num2);
            break;
        case 3:
            printf("Enter two no. : ");
            scanf("%d%d",&num1,&num2);
            printf("Multiplication = %d\n",num1*num2);
            break;
        case 4:
            printf("Enter two no. : ");
            scanf("%f%f",&num1,&num2);
            printf("Division = %.2f\n",(float)num1/num2);
            break;
    }
}