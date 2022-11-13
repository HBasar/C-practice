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
    char tenant_user[20];
    char tenant_pass[20];
    char login_user[20];
    char login_pass[20];
    char creat_file[30];
    char creat_tfile[30];
    int option,n;
    struct owner o1;
    struct tenant t1;
    struct addflat a1;
    FILE *ownerfile;
    FILE *tenantfile;

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
                    n=0;
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
                        while(1)
                        {
                            if(!strcmp(login_pass,o1.pass))
                            {
                                system("cls");
                                printf("\t\t\t\t\t\tDIGITAL RENTAL SYSTEM\n");
                                printf("\t\t\t\t\t\t1.Add Flat");
                                printf("\n\t\t\t\t\t\t2.Collect Rent");
                                printf("\n\t\t\t\t\t\t3.Tenent List");
                                printf("\n\t\t\t\t\t\t4.Back");
                                printf("\n\t\t\t\t\t\t5.Exit");


                                printf("\n\t\t\t\t\t\tchose an option: ");
                                scanf("%d",&n);
                                system("cls");
                                if (n==1)
                                {
                                    n=0;
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

                                if(n==2)
                                {
                                    while(1)
                                    {
                                        n=0;
                                        printf("\t\t\t\t\t\tDIGITAL RENTAL SYSTEM\n"); // work in process
                                        printf("\t\t\t\t\t\t1.Check Balance");

                                        printf("\n\t\t\t\t\t\t2.Transfer Balance");
                                        printf("\n\t\t\t\t\t\t3.Check due's");

                                        printf("\n\t\t\t\t\t\t4.Back");

                                        printf("\n\t\t\t\t\t\t5.Exit");
                                        printf("\n\t\t\t\t\t\tchose an option: ");
                                        scanf("%d",&n);
                                        if(n==4)
                                        {
                                            n=0;
                                            break;
                                        }

                                        system("cls");
                                    }
                                }
                                if(n==3)
                                {
                                    n=0;
                                    printf("\t\t\t\t\t\tDIGITAL RENTAL SYSTEM\n"); // work in process
                                    printf("\t\t\t\t\t\t1.Amir Khan(Flat id:01)");

                                    printf("\n\t\t\t\t\t\t2.Raj Shaha(Flat id:02");

                                    printf("\n\t\t\t\t\t\t3.Back");

                                    printf("\n\t\t\t\t\t\t4.Exit");
                                    printf("\n\t\t\t\t\t\tchose an option: ");
                                    scanf("%d",&n);
                                    system("cls");

                                }

                                if(n==4)
                                {
                                    n=0;
                                    break;
                                }
                                if(n==5)
                                    exit(0);
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
                }
                if(n==2)
                {
                    n=0;
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
            while(1)
            {
                printf("\t\t\t\t\t\tDIGITAL RENTAL SYSTEM\n");
                printf("\t\t\t\t\t\t1.sign in\n");
                printf("\t\t\t\t\t\t2.sign up\n");
                printf("\t\t\t\t\t\t3.Exit\n");
                printf("\t\t\t\t\t\tchose an option: ");
                scanf("%d",&n);
                system("cls");

                if (n==1)
                {
                    n=0;
                    printf("\t\t\t\t\t\tDIGITAL RENTAL SYSTEM\n");
                    printf("\t\t\t\t\t\tUser Name: ");
                    scanf("%s", &tenant_user);
                    strcpy(creat_tfile,tenant_user);
                    tenantfile=fopen(strcat(creat_tfile," "),"r");
                    fread(&t1,sizeof(struct tenant),1,tenantfile);
                    fclose(tenantfile);
                    if(tenantfile==NULL)
                    {
                        printf("\n\t\t\t\t\t\tuser name not found\n");
                        cont_loop(n);
                    }
                    else
                    {
                        printf("\t\t\t\t\t\tPassword : ");
                        scanf("%s",&tenant_pass);
                        while(1)
                        {

                            if(!strcmp(tenant_pass,t1.pass))
                            {
                                system("cls");
                                printf("\t\t\t\t\t\tDIGITAL RENTAL SYSTEM\n");
                                printf("\t\t\t\t\t\t1.Search Flat\n");
                                printf("\t\t\t\t\t\t2.Pay Bill\n");
                                printf("\n\t\t\t\t\t\t3.Back\n");
                                printf("\t\t\t\t\t\t4.Exit\n");
                                printf("\t\t\t\t\t\tchose an option: ");
                                scanf("%d",&n);
                                system("cls");
                                if(n==1)
                                {
                                    while(1)  //last stoped
                                    {
                                        n=0;
                                        printf("\t\t\t\t\t\tDIGITAL RENTAL SYSTEM\n");
                                        printf("\t\t\t\t\t\t1.Dhaka-North\n");
                                        printf("\t\t\t\t\t\t2.Dhaka-south\n");
                                        printf("\t\t\t\t\t\t3.Gazipur\n");
                                        printf("\t\t\t\t\t\t4.Tongi\n");
                                        printf("\t\t\t\t\t\t5.Narayanganj\n");
                                        printf("\t\t\t\t\t\t6.Savar\n\n");
                                        printf("\t\t\t\t\t\t7.Back\n");
                                        printf("\t\t\t\t\t\t8.Exit\n");

                                        printf("\t\t\t\t\t\tchose an option: ");
                                        scanf("%d",&n);
                                        if(n==7)
                                        {
                                            n=0;
                                            break;
                                        }
                                        if(n==8)
                                            exit(0);
                                        system("cls");


                                        if(n==1)
                                        {

                                            n=0;
                                            printf("\t\t\t\t\t\tDIGITAL RENTAL SYSTEM\n");
                                            printf("\t\t\t\t\t\t1.Uttara\n");
                                            printf("\t\t\t\t\t\t2.Mirpur\n");
                                            printf("\t\t\t\t\t\t3.Khilkhet\n");
                                            printf("\t\t\t\t\t\t4.Nikunjo\n");
                                            printf("\t\t\t\t\t\t5.Rampura\n\n");
                                            printf("\t\t\t\t\t\t6.Back\n");
                                            printf("\t\t\t\t\t\t7.Exit\n");
                                            printf("\n\t\t\t\t\t\tchose an option: ");
                                            scanf("%d",&n);
                                            if(n==6)
                                            {
                                                n=0;
                                                break;
                                            }
                                            if(n==7)
                                                exit(0);
                                            system("cls");

                                            if(n==1)
                                            {
                                                n=0;
                                                printf("\t\t\t\t\t\tDIGITAL RENTAL SYSTEM\n");
                                                printf("\t\t\t\t\t\tAvailable Flats in Uttara\n");
                                                printf("\t\t\t\t\t\t1.Greencircle(sector-10)\n");
                                                printf("\t\t\t\t\t\t2.Munnas Home(sector-14)\n");
                                                printf("\t\t\t\t\t\t3.AbikShocchas Home(sector-12)\n");
                                                printf("\t\t\t\t\t\t4.Rohans Coloni(deabari)\n");
                                                printf("\t\t\t\t\t\t5.Nikolo Home(sector-1)\n\n");
                                                printf("\t\t\t\t\t\t6.Back\n");
                                                printf("\t\t\t\t\t\t7.Exit\n");
                                                printf("\n\t\t\t\t\t\tchose an option to see flat details: ");
                                                scanf("%d",&n);
                                                if(n==6)
                                                {
                                                    n=0;
                                                    break;
                                                }
                                                if(n==7)
                                                    exit(0);
                                                system("cls");


                                            }    //last stoped
                                        }
                                    }//last stoped
                                }
                                if(n==2)
                                {
                                    while(1)
                                    {

                                        n=0;
                                        printf("\t\t\t\t\t\tDIGITAL RENTAL SYSTEM\n");

                                        printf("\t\t\t\t\t\t1.Bank payment\n");
                                        printf("\t\t\t\t\t\t2.Mobile Bank payment\n");
                                        printf("\n\t\t\t\t\t\t3.back\n");
                                        printf("\t\t\t\t\t\t4.Exit\n");
                                        printf("\n\t\t\t\t\t\tchose an option: ");
                                        scanf("%d",&n);
                                        if(n==3)
                                        {
                                            n=0;
                                            break;
                                        }
                                        if(n==4)
                                            exit(0);
                                        system("cls");

                                        if(n==1)
                                        {

                                            n=0;
                                            printf("\t\t\t\t\t\tDIGITAL RENTAL SYSTEM\n");

                                            printf("\t\t\t\t\t\t1.Dutch bangla bank\n");
                                            printf("\t\t\t\t\t\t2.Brac bank limited\n");
                                            printf("\t\t\t\t\t\t3.sonali bank\n");
                                            printf("\t\t\t\t\t\t4.islami bank\n");
                                            printf("\n\t\t\t\t\t\t5.back\n");
                                            printf("\t\t\t\t\t\t6.Exit\n");
                                            printf("\n\t\t\t\t\t\tchose an option: ");
                                            scanf("%d",&n);
                                            if(n==5)
                                            {
                                                n=0;
                                                break;
                                            }
                                            if(n==6)
                                                exit(0);
                                            system("cls");
                                        }
                                        if(n==2)
                                        {
                                            n=0;
                                            printf("\t\t\t\t\t\tDIGITAL RENTAL SYSTEM\n");

                                            printf("\t\t\t\t\t\t1.Bkash\n");
                                            printf("\t\t\t\t\t\t2.Nagad\n");
                                            printf("\t\t\t\t\t\t3.Rocket\n");
                                            printf("\t\t\t\t\t\t4.Upay\n");
                                            printf("\n\t\t\t\t\t\t5.back\n");
                                            printf("\t\t\t\t\t\t6.Exit\n");
                                            printf("\n\t\t\t\t\t\tchose an option: ");
                                            scanf("%d",&n);
                                            if(n==5)
                                            {
                                                n=0;
                                                break;
                                            }
                                            if(n==6)
                                                exit(0);
                                            system("cls");
                                        }
                                    }
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
                }
                if(n==2)
                {
                    n=0;
                    printf("\t\t\t\t\t\tDIGITAL RENTAL SYSTEM\n");
                    printf("\t\t\t\t\t\tEmail adress: ");
                    scanf("%s", t1.email);
                    printf("\n\t\t\t\t\t\tPhone number: ");
                    scanf("%s", t1.phone_number);
                    printf("\t\t\t\t\t\tUser Name: ");
                    scanf("%s", t1.name);
                    printf("\n\t\t\t\t\t\tPassword: ");
                    scanf("%s", t1.pass);
                    printf("\n\t\t\t\t\t\tConfirm Password: ");
                    scanf("%s", t1.cpass);
                    strcpy(creat_tfile,t1.name);
                    tenantfile=fopen(strcat(creat_tfile," "),"w");
                    fwrite(&t1,sizeof(struct tenant),1,tenantfile);
                    fclose(tenantfile);
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
        if(option==3)
        {
            exit(0);
        }
    }
    return 0;
}
