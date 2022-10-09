#include<stdio.h>
int main()
{
    int i,n=6,position,num,x=2;
    int array[10]={100,200,300,400,500,600};
    printf("\nArray before inserting: ");
    for(i=0; i<n; i++)
    {
        printf("%d \t",array[i]);
    }
    int k;
    for(k=0;k<x;k++){
    printf("\n\nEnter the position to insert: ");
    scanf("%d",&position);
    printf("\n\nEnter the value to insert: ");
    scanf("%d",&num);
    for(i=n+x; i>=position; i--)
    {
        array[i]=array[i-1];
    }
    array[position-1] = num;
    printf("Array after inserting: ");
    for(i=0; i<=n; i++)
    {
        printf("%d\t",array[i]);

    }
    n++;
    }
    printf("\n\n");
    return 0;

}
