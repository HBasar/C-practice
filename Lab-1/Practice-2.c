/*The distance between Mirpur and Ashulia is input through the keyboard.
Write a program to convert and print this distance in
meter, feet, inches and centimeters. */

#include<stdio.h>
int main()
{
    while(1){
    double km;
    printf("Enter the distance between Mirpur and Ashulia in KM = ");
    scanf("%lf",&km);

    double meter = km * 1000;
    double feet = meter * 3.28084;
    double inches = meter * 39.3709;
    double centimeter = meter * 100;

    printf("\nThe distance in meter is %.2lf",meter);
    printf("\nThe distance in feet is %.2f",feet);
    printf("\nThe distance in inches is %.2lf",inches);
    printf("\nThe distance in centimeter is %.2lf\n\n\n\n",centimeter);


    getch();

}
}
