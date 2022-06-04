//4.Write a program in C to make such a pattern like a pyramid with numbers increased by 1
#include<stdio.h>
int main()
{
    int rows,c=2;
    printf ("Enter a number for the rows: ");
    scanf("%d", &rows);
    printf("\n");

    for (int i = 2; i<= rows; ++i)
    {
        for (int j = 1; j <=i; ++j)
        {
          printf ("%d ",c++);
        }
        printf ("\n");
    }
   return 0;
}
