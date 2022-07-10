//14. Write a c program for to check whether a given number is positive or negative by using conditional operator.
#include<stdio.h>
void main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    n>=0?printf("Positive"):printf("Negative");
}
