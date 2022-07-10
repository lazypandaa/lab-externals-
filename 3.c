//Write a c program to check prime number using while loop.
#include<stdio.h>
void main()
{
    int n,i=1,count=0;
    printf("Prime or not: ");
    scanf("%d",&n);
    while (n>=i)
    {
        if(n%i==0)
            count++;
        i++;
    }
    if(count==2)
        printf("Prime");
    else
        printf("Not a prime");

}
