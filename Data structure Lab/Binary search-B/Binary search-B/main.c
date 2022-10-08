#include <stdio.h>

int main() {
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=9,left=0,right=size,middle,value=8;
    while (left<=right) {
        middle=(left+right)/2;
        if(arr[middle]==value){
            printf("The value is found at: %d number position\n",arr[middle]);
            return 0;
        }else if(arr[middle]<value){
            left=middle+1;
        }else{
            right=middle-1;
        }
    }
    printf("value not found\n");
    
    return 0;
}
