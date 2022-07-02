//write a c program to reverse an array
#include <stdio.h>
int main(){
    int i,array[6] = {9, 8, 7, 2, 4, 3};
    int temp;
    for(i=0; i<6; i++){
        printf("%d ",array[i]);
    }
    printf("\n");
    for(i = 0; i<6/2; i++){
        temp = array[i];
        array[i] = array[6-i-1];
        array[6-i-1] = temp;
    }
    for(int i = 0; i < 6; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}
