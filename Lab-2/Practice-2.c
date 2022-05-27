/*. Any integer is input through the keyboard. 
Write a program to find out whether itis an odd number or even number */

#include<stdalign.h>
int main()
{
    int a,b,c;
    printf("Enter first number = ");
    scanf("%d",&a);
    printf("Enter second number = ");
    scanf("%d",&b);
    printf("Enter third number = ");
    scanf("%d",&c);

    if(a%2==0)
        printf("First number is EVEN\n");
    else if(a%2!=0)
        printf("First number is ODD\n");
    if(b%2==0)
        printf("Second number is Even\n");
    else if(b%2!=0)
        printf("Second number is ODD\n");
    if(c%2==0)
        printf("Third number is Even\n");
    else if(c%2!=0)
        printf("Third number is ODD\n");
    else
        printf("Numbers are equal\n");

    getch();
}
