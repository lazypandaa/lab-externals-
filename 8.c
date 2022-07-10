//8.Write a c program to check whether given number is even/ odd by using if-else
#include<stdio.h>
void main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    if(n%2==0)
        printf("Even");
    else
        printf("Odd");

}
