#include <stdio.h>

int main() {
    char choice;
    int a,b;
    printf("enter a number \n");
    scanf("%d",&a);
    printf("enter a option +,-,*,/ \n");
    scanf("\n%c",&choice);
    printf("enter 2nd numbers");
    scanf("%d",&b);
    switch (choice) {
        case '+':
            printf("%d + %d = %d\n",a,b,a+b);
            break;
        case '-':
            printf("%d - %d = %d\n",a,b,a-b);
            break;
        case '*':
            printf("%d * %d = %d\n",a,b,a*b);
            break;
        case '/':
            printf("%d / %d = %d\n",a,b,a/b);
            break;
            
        default:
            printf("invalid choice\n");

            break;
    }

    
    return 0;
}
