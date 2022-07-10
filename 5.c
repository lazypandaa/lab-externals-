//5. Write a c program to print factorial
//without using recursion
#include<stdio.h>
void main()
{
    int n,fact=1;
    printf("Enter n: ");
    scanf("%d",&n);
    while (n>0)
    {
        fact=fact *n;
        n--;
    }
    printf("%d",fact);   
}


//using recursion
int fact(int);
#include<stdio.h>
void main()
{
    int n,c;
    printf("Enter n: ");
    scanf("%d",&n);
    c=fact(n);
    printf("%d",c);
}
int fact(int n)
{
    if (n==0||n==1)
        return 1;
    else
        return n*fact(n-1);
}
