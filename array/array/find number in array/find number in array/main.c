//write a c program to search a number in an array. It will print the index of the element.
#include <stdio.h>

int main()
{
    int array[10]={1,2,3,4,5,6,7,8,9,10};
    int i,found=-1,search;
    printf("Enter search value:\n");
    scanf("%d",&search);
    for(i=0;i<10;i++){
        if(array[i]==search){
            found=i;
        }
    }
    
    if(found==-1){
        printf("Item not found\n");
        
    }else{
        printf("Item found at index on. %d\n",found);
    }

    return 0;
}
