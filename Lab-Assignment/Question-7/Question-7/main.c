//7.Write a C program to print prime number from 1 to 200

#include<stdio.h>
#include<math.h>
int main()
{
    int count,prime;
    printf("Prime numbers from 1 to 200-\n\n");
    for(int a=1;a<=200;a++)
    {
        if(a==1)
        {
            printf("1 is not a prime number.\n\n");
            continue;
        }
        count=sqrt(a);
        prime=1;
        for(int i=2;i<=count;i++)
        {
            if(a%i==0)
            {
                prime=0;
                break;
            }
        }
        if(prime)
        {
            printf("%d\t",a);
        }
    }
    return 0;
}
