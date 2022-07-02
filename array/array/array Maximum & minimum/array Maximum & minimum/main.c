// c program to find the maximum and minimu number form the array
#include<stdio.h>
int main(){
    int A[5]={4,5,6,7,8};
    int i,min,max;
    printf("\nThe given array A is :");
    for(i=0; i<5; i++){
        printf("%d\t",A[i]);
    }
    min=max=A[0];
    for(i=0; i<5; i++){
        if(A[i]>max){
            max=A[i];
        }
        if(A[i]<min){
            min=A[i];
        }
    }
    printf("\n");
    printf("max number: %d\nminimum number: %d\n",max,min);
    return 0;
}
