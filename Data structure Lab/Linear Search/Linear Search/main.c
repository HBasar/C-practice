#include<stdio.h>
int main()
{
    int A[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int i,value,pos=-1;

    printf("Enter the value= ");
    scanf("%d",&value);
    for(i=0; i<50;i++)
    {
        if(value==A[i])
        {
            pos=i+1;
        }
    }
    if(pos==-1)
    {
        printf("Value not found\n");
    }
    else
    {
        printf("Value is available\n");
        printf("Position is %d\n",pos);
    }

}
