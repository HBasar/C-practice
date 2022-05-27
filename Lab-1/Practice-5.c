#include<stdio.h>
#define pi 3.1416
int main()
{
    double length, breadth, radius;

    printf("Enter the length of Rectangle = ");
    scanf("%lf",&length);
    printf("Enter the breadth of Rectangle = ");
    scanf("%lf",&breadth);
    printf("Enter the radius os Circle = ");
    scanf("%lf",&radius);
    printf("\n\n");

    double area_of_circle = pi*radius*radius;
    double circumference_of_circle = 2*pi*radius;
    double area_of_rectangle = length*breadth;
    double perimeter_of_rectangle = 2*(length+breadth);

    printf("The area of circle is %.2lf\n",area_of_circle);
    printf("The circumference of circle is %.2f\n",circumference_of_circle);
    printf("The area of rectangle is %.2lf\n",area_of_rectangle);
    printf("The perimeter of rectangle is %.2lf\n",perimeter_of_rectangle);

    getch();
}
