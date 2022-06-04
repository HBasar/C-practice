//1 .Write a program in C to display n terms of natural number and their sum.
#include<stdio.h>

int main()
{
    int a,sum=0,n;
    printf("Enter the value : ");
    scanf("%d",&n);

    for(a=1;a<=n;a++)
    {
        printf("\t%d",a);
        sum = sum+a;
    }
    printf("\nSum of first %d natural number is :%d\n",n,sum);

    return 0;
}
