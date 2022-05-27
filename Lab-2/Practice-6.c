/*Write a program to check whether a triangle is valid or not,
when the three angles of the triangle are entered through the keyboard.
A triangle is valid if the sum of all the
three angles is equal to 180 degrees*/

#include<stdio.h>
int main()
{
    int first_angle,second_angle,third_angle;
    printf("Enter First angle = ");
    scanf("%d",&first_angle);
    printf("Enter second angle = ");
    scanf("%d",&second_angle);
    printf("Enter Third angle = ");
    scanf("%d",&third_angle);

    int sum = first_angle + second_angle + third_angle;

    if(sum==180){
        printf("\nTriangle is valid\n\n");
    }
    else{
        printf("\nTriangle is invalid\n\n");
    }
    return 0;
}
