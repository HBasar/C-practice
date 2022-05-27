#include<stdio.h>
int main()
{
    int x1,y1,x2,y2,x3,y3;
    printf("(x1,y1) = ");
    scanf("%d %d",&x1,&y1);
    printf("(x2,y2) = ");
    scanf("%d %d",&x2,&y2);
    printf("(x3,y3) = ");
    scanf("%d %d",&x3,&y3);

    int curve1 = (x2-x1)/(y2-y1);
    int curve2 = (x3-x2)/(y3-y2);

    if(curve1==curve2){
        printf("\nAll the point are in the straight line\n\n");
    }
    else{
        printf("\nAll point are not in the straight line\n\n");
    }
    return 0;
}
