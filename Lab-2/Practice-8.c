#include<stdio.h>
int main()
{
    float length,breadth;
    printf("Enter the length = ");
    scanf("%f",&length);
    printf("Enter the breadth = ");
    scanf("%f",&breadth);

    float area = length*breadth;
    float perimeter = 2*(length+breadth);

    if(area>perimeter){
        printf("\nArea is greater than perimeter\n\n");
    }
    else{
        printf("\nArea is less than perimeter\n\n");
    }
    return 0;
}
