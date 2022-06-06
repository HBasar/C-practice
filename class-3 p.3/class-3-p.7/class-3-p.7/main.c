#include<stdio.h>
int main()
{
    int rows;
    printf (" Enter a number to define the rows: \n ");
    scanf("%d", &rows);
    printf("\n");
    for (int i = 1; i <= rows; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            printf ("* ");
        }
        printf ("\n");
    }
   return 0;
}
