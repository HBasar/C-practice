#include<stdio.h>
int main()
{
    float total_population = 80000;

    float men_percentage = 0.52*total_population;
    float total_literate_percentage = 0.48*total_population;
    float total_women = total_population - men_percentage;
    float literate_men = 0.35*total_population;
    float illiterate_men = men_percentage - literate_men;
    float illiterate_women = total_women-(total_literate_percentage - literate_men);

    //printf("Total men is %.2f",men_percentage);
    //printf("\n\nTotal literacy is %.2f",total_literate_percentage);

    printf("Total illiterate men is %.2f",illiterate_men);
    printf("\nTotal illiterate women is %.2f",illiterate_women);

    getch();

}
