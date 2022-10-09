#include<stdio.h>
int main()
{
    int i,n,t=6;
    int array[10]={100,200,300,400,500,600};
    int k;
    for(k=0;k<2;k++){
    for(i=0; i<t; i++)
    {
        printf("%d\t",array[i]);
    }
    printf("\nEnter position to delete\n");
    scanf("%d",&n);
    for (i=n; i<6; i++) {
        array[n-1]=array[n];
        n++;
    }
    t--;
    }
    for (i=0; i<4; i++) {
        printf("%d\t",array[i]);
    }
    printf("\n\n");
    return 0;
}
