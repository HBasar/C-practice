#include <stdio.h>

int main() {
    int a,b,c,angle;
    printf("enter e angle values: ");
    scanf("%d%d%d",&a,&b,&c);
    angle=a+b+c;
    if(angle==180){
        printf("its a valid triangle\n");
    }else{
        printf("its not valid\n");
    }
    return 0;
}
