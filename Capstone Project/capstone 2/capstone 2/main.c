#include <stdio.h>
#include <stdlib.h>
struct owner{
    char name[20];
    char phone_number[20];
    char email[20];
    char pass[20];
    char cpass[20];
};
struct tenant{
    char name[20];
    char phone_number[20];
    char email[20];
    char pass[20];
    char cpass[20];
};
struct addflat{
    char nflor[10];
    char nbed[10];
    char nbath[10];
    char ndrawingroom[10];
    char ndinningroom[10];
    char nkitchen[10];
    char nbalcony[10];
    char mrent[10];
};

int main() {
    int option,n,n2;
    struct owner o1;
    struct tenant t1;
    struct addflat a1;
    printf("1.Owner\n");
    printf("2.Tnent\n");
    printf("3.Exit\n");
    printf("chose an option: ");
    scanf("%d",&option);
//    system("cls");
//    system ("clear");
    
    switch (option) {
        case 1:
            printf("1.sign in\n");
            printf("2.sign up\n");
            printf("3.Exit\n");
            printf("chose an option: \n");

            scanf("%d",&n);
            
            if (n==1) {
                printf("User Name: \n");
                scanf("%s", o1.name);
                printf("Password : \n");
                scanf(" %s", o1.pass);
                
                printf("1.Add Flat\n");
                printf("2.Manage monthly Bill\n");
                printf("3.Show All Flats\n");
                printf("4.Exit\n");

                int n3;
                scanf("%d",&n3);
                if (n3==1) {
                    printf("Enter Flors: \n");
                    scanf("%s",a1.nflor);
                    printf("Enter Number of Bed Room: \n");
                    scanf("%s",a1.nbed);
                    printf("Enter Number of Bath Room: \n");
                    scanf("%s",a1.nbath);
                    printf("Enter Number of Drawing Room: \n");
                    scanf("%s",a1.ndrawingroom);
                    printf("Enter Number of Dinning Room: \n");
                    scanf("%s",a1.ndinningroom);
                    printf("Enter Number of Kitchen: \n");
                    scanf("%s",a1.nkitchen);
                    printf("Enter Number of Balcony: \n");
                    scanf("%s",a1.nbalcony);
                    printf("Enter Monthly rent: \n");
                    scanf("%s",a1.mrent);
                    printf("Flat added\n");


                }

            }else{
                printf("Email adress: \n");
                scanf("%s", o1.email);
                printf("Phone number: \n");
                scanf("%s", o1.phone_number);
                printf("Password: \n");
                scanf("%s", o1.pass);
                printf("Confirm Password: \n");
                scanf("%s", o1.cpass);
                
            }
            

            break;
        case 2:
            printf("1.sign in\n");
            printf("2.sign up\n");
            printf("3.Exit\n");
            
            scanf("%d",&n2);
            
            if (n2==1) {
                printf("User Name: \n");
                scanf("%s", t1.name);
                printf("Password : \n");
                scanf(" %s", t1.pass);
                
                printf("1.Search Flat\n");
                printf("2.Pay Bill\n");
                printf("3.Exit\n");

                int n3;
                scanf("%d",&n3);
                
               

            }else{
                printf("Email adress: \n");
                scanf("%s", t1.email);
                printf("Phone number: \n");
                scanf("%s", t1.phone_number);
                printf("Password: \n");
                scanf("%s", t1.pass);
                printf("Confirm Password: \n");
                scanf("%s", t1.cpass);
                
            }

            break;
            
            
        default:
            break;
    }
    
    return 0;
}
