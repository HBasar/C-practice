//write a c program to copy an array to another array
#include <stdio.h>
     
int main()
{
    int array1[5] = {1, 2, 3, 4, 5};
    
    int array2[5];
        
    for (int i = 0; i < 5; i++) {
        array2[i] = array1[i];
    }
        
    printf("Elements of array1: \n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", array1[i]);
    }
        
    printf("\n");
        
    printf("Elements of new array2: \n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", array2[i]);
    }
    return 0;
}
