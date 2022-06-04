//2.Write a program in C to read 10 numbers from keyboard and find their sum and average.

#include<stdio.h>

int main()
{
    int n,a,sum=0;
    double avg;

    printf("Enter the number : ");

    for(a=1;a<=10;a++)
    {
        printf("\nNumber-%d: ",a);
        scanf("%d",&n);
        sum+=n;
    }
    avg=sum/10.0;
    printf("\n\nSum of 10 number is :%d\nThe Average is: %.2f\n",sum,avg);
    return 0;
}
