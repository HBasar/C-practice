#include<stdio.h>
int main()
{
    int i,n;
    int array[10]={1,2,3,4,5,6};
    for(i=0; i<6; i++)
    {
        printf("%d\t",array[i]);
    }
    printf("\nEnter position to delete\n");
    scanf("%d",&n);
    for (i=n; i<6; i++) {
        array[n-1]=array[n];
        n++;
    }
    for (i=0; i<5; i++) {
        printf("%d\t",array[i]);
    }
    printf("\n\n");
    return 0;

}
