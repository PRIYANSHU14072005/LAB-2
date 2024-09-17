//PROGRAM WHICH WILL WORK LIKE A SIMPLE CALCULATOR USING SWITCH-CASE.
#include <stdio.h>
int main()
{
    int c;
    float a, b;
    printf("enter a : ");
    scanf("%f", &a);
    printf("enter b : ");
    scanf("%f", &b);
    /*1 = sum
   2 = subtraction
   3 = multiplication
   4 = division
    */
    printf("enter what to calculate :");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        printf("sum is %f", a + b);
        break;
    case 2:
        printf("subraction is %f", a - b);
        break;
    case 3:
        printf("multiplication is %f", a * b);
        break;
    case 4:
        printf("division is %f", a / b);
        break;
    }
    return 0;
}