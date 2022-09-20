#include <stdio.h>
#include <stdlib.h>
struct owner
{
    char name[20];
    char phone_number[20];
    char email[20];
    char pass[20];
    char cpass[20];
};
struct tenant
{
    char name[20];
    char phone_number[20];
    char email[20];
    char pass[20];
    char cpass[20];
};
struct addflat
{
    char nflor[10];
    char nbed[10];
    char nbath[10];
    char ndrawingroom[10];
    char ndinningroom[10];
    char nkitchen[10];
    char nbalcony[10];
    char mrent[10];
};

void cont_loop(int n)
{
    printf("\n\t\t\t\t\t\t1.Back\n\t\t\t\t\t\t2.Exit");
    printf("\n\t\t\t\t\t\tChoose an option: ");
    scanf("%d",&n);

    if(n==1)
    {
    }
    if(n==2)
    {
        exit(0);
    }
}

int main()
{
    char login_user[20];
    char login_pass[20];
    char creat_file[30];
    int option,n,n2;
    struct owner o1;
    struct tenant t1;
    struct addflat a1;
    FILE *ownerfile;
    FILE *tenentfile;

    while(1)
    {
        printf("\t\t\t\t\t\tDIGITAL RENTAL SYSTEM\n");
        printf("\t\t\t\t\t\t1.Owner\n");
        printf("\t\t\t\t\t\t2.Tnent\n");
        printf("\t\t\t\t\t\t3.Exit\n");
        printf("\t\t\t\t\t\tchose an option: ");
        scanf("%d",&option);
        system("cls");

        if(option==1) //OWNER Panel
        {
            while(1)
            {
                printf("\t\t\t\t\t\tDIGITAL RENTAL SYSTEM\n");
                printf("\t\t\t\t\t\t1.sign in\n");
                printf("\t\t\t\t\t\t2.sign up\n");
                printf("\t\t\t\t\t\t3.Back\n");
                printf("\t\t\t\t\t\t4.Exit\n");
                printf("\t\t\t\t\t\tchose an option: ");
                scanf("%d",&n);
                system("cls");

                if(n==1)
                {
                    printf("\t\t\t\t\t\tDIGITAL RENTAL SYSTEM\n");
                    printf("\t\t\t\t\t\tUser Name: ");
                    scanf("%s", &login_user);
                    strcpy(creat_file,login_user);
                    ownerfile=fopen(strcat(creat_file," "),"r");
                    fread(&o1,sizeof(struct owner),1,ownerfile);
                    fclose(ownerfile);
                    if(ownerfile==NULL)
                    {
                        printf("\n\t\t\t\t\t\tuser name not found\n");
                        cont_loop(n);

                    }
                    else
                    {
                        printf("\t\t\t\t\t\tPassword : ");
                        scanf(" %s", &login_pass);
                        if(!strcmp(login_pass,o1.pass))
                        {
                            system("cls");
                            printf("\t\t\t\t\t\tDIGITAL RENTAL SYSTEM\n");
                            printf("\t\t\t\t\t\t1.Add Flat");
                            printf("\n\t\t\t\t\t\t2.Manage monthly Bill");
                            printf("\n\t\t\t\t\t\t3.Show All Flats");
                            printf("\n\t\t\t\t\t\t4.Back");
                            printf("\n\t\t\t\t\t\t5.Exit");

                            int n3;
                            printf("\n\t\t\t\t\t\tchose an option: ");
                            scanf("%d",&n3);
                            system("cls");
                            if (n3==1)
                            {
                                printf("\t\t\t\t\t\tDIGITAL RENTAL SYSTEM\n");
                                printf("\t\t\t\t\t\tEnter Flors: ");
                                scanf("%s",a1.nflor);
                                printf("\n\t\t\t\t\t\tEnter Number of Bed Room: ");
                                scanf("%s",a1.nbed);
                                printf("\n\t\t\t\t\t\tEnter Number of Bath Room: ");
                                scanf("%s",a1.nbath);
                                printf("\n\t\t\t\t\t\tEnter Number of Drawing Room: ");
                                scanf("%s",a1.ndrawingroom);
                                printf("\n\t\t\t\t\t\tEnter Number of Dinning Room: ");
                                scanf("%s",a1.ndinningroom);
                                printf("\n\t\t\t\t\t\tEnter Number of Kitchen: ");
                                scanf("%s",a1.nkitchen);
                                printf("\n\t\t\t\t\t\tEnter Number of Balcony: ");
                                scanf("%s",a1.nbalcony);
                                printf("\n\t\t\t\t\t\tEnter Monthly rent: ");
                                scanf("%s",a1.mrent);
                                printf("\n\t\t\t\t\t\tFlat added\n");
                            }
                        }
                        else
                        {
                            system("cls");
                            printf("\t\t\t\t\t\tDIGITAL RENTAL SYSTEM\n");
                            printf("\n\t\t\t\t\t\tWrong password\n");
                            cont_loop(n);
                        }
                    }
                }
                if(n==2)
                {
                    printf("\t\t\t\t\t\tDIGITAL RENTAL SYSTEM\n");
                    printf("\t\t\t\t\t\tEmail adress: ");
                    scanf("%s", o1.email);
                    printf("\n\t\t\t\t\t\tPhone number: ");
                    scanf("%s", o1.phone_number);
                    printf("\n\t\t\t\t\t\tUser name: ");
                    scanf("%s", o1.name);
                    printf("\n\t\t\t\t\t\tPassword: ");
                    scanf("%s", o1.pass);
                    printf("\n\t\t\t\t\t\tConfirm Password: ");
                    scanf("%s", o1.cpass);
                    strcpy(creat_file,o1.name);
                    ownerfile=fopen(strcat(creat_file," "),"w");
                    fwrite(&o1,sizeof(struct owner),1,ownerfile);
                    fclose(ownerfile);
                    system("cls");

                }
                if(n==3)
                {
                    n=0;
                    break;
                }
                if(n==4)
                {
                    exit(0);
                }
                system("cls");
            }
        }

        if(option==2)   //TENENT PANEL
        {
            printf("\t\t\t\t\t\tDIGITAL RENTAL SYSTEM\n");
            printf("\t\t\t\t\t\t1.sign in\n");
            printf("\t\t\t\t\t\t2.sign up\n");
            printf("\t\t\t\t\t\t3.Exit\n");
            printf("\t\t\t\t\t\tchose an option: ");
            scanf("%d",&n2);
            system("cls");

            if (n2==1)
            {
                printf("\t\t\t\t\t\tDIGITAL RENTAL SYSTEM\n");
                printf("\t\t\t\t\t\tUser Name: ");
                scanf("%s", t1.name);
                printf("\n\t\t\t\t\t\tPassword : ");
                scanf(" %s", t1.pass);
                system("cls");

                printf("\t\t\t\t\t\tDIGITAL RENTAL SYSTEM\n");
                printf("\t\t\t\t\t\t1.Search Flat\n");
                printf("\t\t\t\t\t\t2.Pay Bill\n");
                printf("\t\t\t\t\t\t3.Exit\n");
                printf("\t\t\t\t\t\tchose an option: ");
                int n3;
                scanf("%d",&n3);
                system("cls");



            }
            else
            {
                printf("\t\t\t\t\t\tDIGITAL RENTAL SYSTEM\n");
                printf("\t\t\t\t\t\tEmail adress: ");
                scanf("%s", t1.email);
                printf("\n\t\t\t\t\t\tPhone number: ");
                scanf("%s", t1.phone_number);
                printf("\n\t\t\t\t\t\tPassword: ");
                scanf("%s", t1.pass);
                printf("\n\t\t\t\t\t\tConfirm Password: ");
                scanf("%s", t1.cpass);
            }
        }
        if(option==3)
        {
            exit(0);
        }
    }
    return 0;
}
