// PROGRAM TO READ THREE NOS. AND PRINT MAX USING LOGICAL OPERATOR.(&&)
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter a : ");
    scanf("%d", &a);
    printf("enter b : ");
    scanf("%d", &b);
    printf("enter c : ");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("a");
    }
    else if (b > a && b > c)
    {
        printf("b");
    }
    else if (c > b && c > a)
        ;
    {
        printf("c");
    }
    return 0;
}