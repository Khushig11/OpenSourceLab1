#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int c;
    printf("Enter first number:- ");
    scanf("%d",&a);
    printf("Enter second number:- ");
    scanf("%d",&b);

    c = a*b;
    printf("The product of %d and %d is = %d",a,b,c);
}
