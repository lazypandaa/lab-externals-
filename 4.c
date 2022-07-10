// 4.Write a c program to check palindrome number using do-while loop
#include<stdio.h>
int main()
{
    int n,rev=0,rem,temp;
    printf("Enter n: ");
    scanf("%d",&n);
    temp=n;
    while (n>0)
    {       
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }
    if (temp==rev)
        printf("Palandrome");
    else
        printf("Not a Palandrome");
    return 0; 
}
