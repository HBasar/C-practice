#include <stdio.h>

int main() {
    int arr[]={12,2,5,3,10};
    int i,j,temp,size=5;
    int swap,counter=0;
    
    for (i=0; i<size-1; i++) {
        swap=0;
        for (j=0; j<size-1-i; j++) {
            counter++;
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swap=1;
            }
        }
        if(swap==0){
            break;
        }
    }
    printf("\nAfter shorting:\n");
    for (i=0; i<size; i++) {
        printf("%d\t",arr[i]);
    }
    printf("\n Total loop: %d\n",counter);
    
    return 0;
}
