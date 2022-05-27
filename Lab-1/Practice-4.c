#include<stdio.h>
int main()
{
    float centigrade, fahrenheit;

    printf("=======Welcome to temperature conversion menu=======\n\n");
    printf("Enter Fahrenheit Temperature ");
    scanf("%f",&fahrenheit);

    centigrade = ((fahrenheit-32)*5)/9;
    printf("\nThe centigrade temperature is %.2f C",centigrade);

    getch();
}
