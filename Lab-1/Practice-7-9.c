#include<stdio.h>
int main()
{
    int num,a1,a2,a3,a4,a5,b1,b2,b3,b4,b5;
    printf("Enter the number = ");
    scanf("%d",&num);

    a1=num/10;
    b5=num%10;
    a2=a1/10;
    b4=a1%10;
    a3=a2/10;
    b3=a2%10;
    a4=a3/10;
    b2=a3%10;
    a5=a4/10;
    b1=a4%10;

    int sum=b1+b2+b3+b4+b5;
    int sum1=b1+b5;
    printf("Sum is %d\n\n",sum);
    printf("Revers order = %d\t %d\t %d\t %d\t %d\t\n\n",b5,b4,b3,b2,b1);
    printf("1st & last number sum is = %d\n",sum1);



}
