//write a c program to calculate the sum and average of an array
#include <stdio.h>

int main() {
    
    int i,array[5]={4,5,6,7,8};
    float sum=0.00,average;
    printf("\nThe given array A is : ");
    for(i=0; i<5; i++){
        printf("%d\t",array[i]);
    }
    for(i=0;i<5;i++){
        sum=sum+array[i];
    }
    printf("\n");
    printf("Sum of the array is: %0.2f\n",sum);
    average=sum/5;
    printf("Average of the array is: %0.2f\n",average);

    return 0;
}
