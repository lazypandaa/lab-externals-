//6.Write a c program to reverse given number for loop
#include<stdio.h>
int main()
{
    int n,rev=0,rem,temp;
    printf("Enter n: ");
    scanf("%d",&n);
    temp=n;
    for(;n>0;n=n/10)
    {   
        rem=n%10;
        rev=(rev*10)+rem;
    }

    printf("reverse: %d",rev);
    return 0; 
}
