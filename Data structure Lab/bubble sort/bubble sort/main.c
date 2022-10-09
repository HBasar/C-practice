#include<stdio.h>
int main()
{
    
    int i,j,temp,n;
    char a[10]={'a','c','n','q','r'};
    for(i=0;i<5;i++){
        
        printf("%c\t",a[i]);
    }
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
        if(a[i]<a[j]){
            
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        }
}
    printf("\nshorted array\n");
    for(i=0;i<5;i++){
        printf("%c\t",a[i]);
        
    }
    printf("\n");
    
    
}
