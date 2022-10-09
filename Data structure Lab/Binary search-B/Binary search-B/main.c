#include <stdio.h>

int main() {
    int arr[]={1,3,4,5,6,7,8,9,10};
    int size=8,left=0,right=size,middle,value=5;
    while (left<=right) {
        middle=(left+right)/2;
        if(arr[middle]==value){
            printf("The value is found at: %d number position\n",middle+1);
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
