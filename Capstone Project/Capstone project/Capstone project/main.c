#include <stdio.h>

int main() {
    printf("1.Owner\n");
    printf("2.Tnent\n");
    printf("3.Exit\n");
    printf("chose an option");

    int n,choice;
    char name[20];
    char pass[20];

    scanf("%d",&choice);
    
    switch (choice) {
        case 1:
            printf("1.sign in\n");
            printf("2.sign up\n");
            printf("3.Exit\n");
            printf("chose an option\n");

            scanf("%d",&n);
            
            if (n==1) {
                printf("User Name: \n");
                scanf("%s", name);
                printf("Password : \n");
                scanf("%s", pass);

            }else{
                
            }
            

            break;
        case 2:
            printf("sign in\n");
            printf("sign up\n");
            printf("3.Exit\n");

            break;
            
            
        default:
            break;
    }
    return 0;
}
