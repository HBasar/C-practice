#include<stdio.h>
int main()
{
    
    int i,j,temp,n;
    printf("enter number of elemant to scan: \n");
    scanf("%d",&n);
    int a[n];
    for (i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        
        printf("%d\t",a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<5;j++){
        if(a[i]>a[j]){
            
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        }
}
    printf("\nshorted array\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
        
    }
    printf("\n");
    
    
}
