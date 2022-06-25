#include <stdio.h>

int main() {
    int n1,n2,n3;
    printf("enter 3 numbers: ");
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1>=n2){
        if(n1>=n3){
            printf("%d is the largest\n",n1);
            
        }
    }else{
        if(n2>=n1){
            if(n2>=n3){
                printf("%d is the largest\n",n2);
            }else{
                printf("%d is the largest\n",n3);
            }
        }
    }
   
    return 0;
}
