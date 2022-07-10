//15. Write c program to print 1 to n prime numbers using nested while loop
#include<stdio.h>
void main()
{
    int n,i,j,x,count;
    printf("Enter n: ");
    scanf("%d",&n);
    x=1;
    while (n>=x)
    {
        i=1;
        count=0;
        while (x>=i)
        {
            if(x%i==0)
                count++;
            i++;
        }
        if(count==2)
            printf("%d\t",x);
        x++;
    }
    
}
