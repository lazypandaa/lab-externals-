//16.Write c program to print following half Pyramid of Numbers using nested do while loop
#include<stdio.h>
void main()
{
    int n,i,j;
    scanf("%d",&n);
    i=1;
    do{
        j=1;
        do
        {

            printf("%d",j);
            j++;
        } while (i>=j);
        printf("\n");
        i++;
    } while (n>=i); 
}
