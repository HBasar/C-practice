//6.Write a program in C to display the n terms of even natural number and their sum.

#include<stdio.h>

int main()
{
    int n,sum=0;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("\nThe even number are :");

    for(int i=1;i<=n;i++)
    {
        printf("\t%d",2*i);
        sum+=2*i;
    }
    printf("\n\nSum of %d odd natural number is : %d\n",n,sum);


    return 0;
}
