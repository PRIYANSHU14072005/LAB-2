//PROGRAM TO READ THREE NOS. AND PRINT MAX USING CONDITIONAL (? :) OPERATOR.
#include<stdio.h>
int main () {
    int a,b,c;
    printf("enter a : ");
    scanf("%d",&a);
     printf("enter b : ");
    scanf("%d",&b);
     printf("enter c : ");
    scanf("%d",&c);
    a>b&a>c?printf("a is max\n"):printf("a is smaller\n");
    b>a&b>c?printf("b is max\n"):printf("b is smaller\n");
    c>a&c>b?printf("c is max\n"):printf("c is smaller\n");
    return 0;
}