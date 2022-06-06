#include<stdio.h>
int main()
{
    int number = 1, count, limit;
    float sum = 0.0, fact;
  
    printf("Enter the number of terms\n");
    scanf("%d", &limit);
  
    while(number <= limit)
    {
        fact = 1;
        for(count = 1; count <= number; count++)
        {
            fact = fact * count;
        }
  
        sum = sum + (number / fact);
  
        number++;
    }
  
    printf("Sum of %d terms of series is %f\n", limit, sum);
  
    return 0;
}
