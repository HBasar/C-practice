/*If the ages of Basar, Rayhan and Shitol are input through the keyboard,
write a program to determine the youngest of the three. */

#include<stdio.h>
int main()
{
    int basar_age,shitol_age,rayhan_age;
    printf("Enter Basar age = ");
    scanf("%d",&basar_age);
    printf("Enter Shitol age = ");
    scanf("%d",&shitol_age);
    printf("Enter Rayhan age = ");
    scanf("%d",&rayhan_age);

    if(basar_age>shitol_age && basar_age>rayhan_age){
        printf("\nBasar is youngest\n\n");
    }
    else{
        if(shitol_age>basar_age && shitol_age>rayhan_age){
            printf("\nShitol is youngest\n\n");
        }
        else{
            printf("\nRayhan is Youngest\n\n");
        }
    }
    return 0;
}
