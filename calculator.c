#include <stdio.h>

int main (void)
{
    double n1,n2;
    char o;

    printf("\n----------SIMPLE CALCULATOR-----------\n\n");
   
    printf("Enter the 1st number: ");
    scanf("%lf",&n1);
    printf("Enter the 2nd number: ");
    scanf("%lf",&n2);
    printf("Enter operator (+ , - , / , *): ");
    
    scanf(" %c",&o);
    if(o == '+')
    {
        printf("%.0lf + %.0lf = %.3lf",n1,n2,(n1+n2));
    }
    
    if(o =='-')
    {
        printf("%.0lf - %.0lf = %.3lf",n1,n2,(n1-n2));
    }
    if(o =='/')
    {
        printf("%.0lf / %.0lf = %.3lf",n1,n2,(n1/n2));
    }
    if(o =='*')
    {
        printf("%.0lf x %.0lf = %.3lf",n1,n2,(n1*n2));
    }
    
    

    return 0;
}