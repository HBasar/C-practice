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
    char adress[50];
    char hname[20];
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
    char uttara_ch;
    char mirpur_ch;
    char khilkhet_ch;
    char nikunjo_ch;
    char rampura_ch;
    int option,n;
    struct owner o1;
    struct tenant t1;
    struct addflat a1;
    FILE *ownerfile;
    FILE *tenantfile;
    FILE *uttaraFlat;
    FILE *mirpurFlat;
    FILE *khilkhetFlat;
    FILE *nikunjoFlat;
    FILE *rampuraFlat;

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
                                    printf("\t\t\t\t\t\t1.Uttara\n");
                                    printf("\t\t\t\t\t\t2.Mirpur\n");
                                    printf("\t\t\t\t\t\t3.Khilkhet\n");
                                    printf("\t\t\t\t\t\t4.Nikunjo\n");
                                    printf("\t\t\t\t\t\t5.Rampura\n\n");
                                    printf("\t\t\t\t\t\t6.Back\n");
                                    printf("\t\t\t\t\t\t7.Exit\n");
                                    printf("\n\t\t\t\t\t\tchose an option: ");
                                    scanf("%d",&n);

                                    system("cls");
                                    if(n==1)
                                    {

                                        n=0;

                                        uttaraFlat=fopen("uttaraflatdata.txt","a");
                                        if(uttaraFlat==NULL)
                                        {
                                            printf("file not created");
                                        }
                                        else
                                        {


                                            printf("\t\t\t\t\t\tDIGITAL RENTAL SYSTEM\n");
                                            fgetc(stdin);
                                            printf("\t\t\t\t\t\tHouse Name: ");
                                            fgets(a1.hname,20,stdin);
                                            a1.hname[strlen(a1.hname)-1]=0;
                                            fprintf(uttaraFlat,"House Name = %s\n\n",a1.hname);

                                            printf("\t\t\t\t\t\tEnter Full Adress: ");
                                            fgets(a1.adress,50,stdin);
                                            a1.adress[strlen(a1.adress)-1]=0;

                                            printf("\n\t\t\t\t\t\tEnter Flors: ");
                                            scanf("%s",a1.nflor);
                                            fprintf(uttaraFlat,"Flors = %s\n",a1.nflor);
                                            printf("\n\t\t\t\t\t\tEnter Number of Bed Room: ");
                                            scanf("%s",a1.nbed);
                                            fprintf(uttaraFlat,"Bed Rooms = %s\n",a1.nbed);
                                            printf("\n\t\t\t\t\t\tEnter Number of Bath Room: ");
                                            scanf("%s",a1.nbath);
                                            fprintf(uttaraFlat,"Bath rooms = %s\n",a1.nbath);
                                            printf("\n\t\t\t\t\t\tEnter Number of Drawing Room: ");
                                            scanf("%s",a1.ndrawingroom);
                                            fprintf(uttaraFlat,"Drawing rooms = %s\n",a1.ndrawingroom);
                                            printf("\n\t\t\t\t\t\tEnter Number of Dinning Room: ");
                                            scanf("%s",a1.ndinningroom);
                                            fprintf(uttaraFlat,"Dinning Rooms = %s\n",a1.ndinningroom);
                                            printf("\n\t\t\t\t\t\tEnter Number of Kitchen: ");
                                            scanf("%s",a1.nkitchen);
                                            fprintf(uttaraFlat,"Kitchens = %s\n",a1.nkitchen);
                                            printf("\n\t\t\t\t\t\tEnter Number of Balcony: ");
                                            scanf("%s",a1.nbalcony);
                                            fprintf(uttaraFlat,"Balconys = %s\n",a1.nbalcony);
                                            printf("\n\t\t\t\t\t\tEnter Monthly rent: ");
                                            scanf("%s",a1.mrent);
                                            fprintf(uttaraFlat,"Rent = %s\n",a1.mrent);

                                            printf("\n\t\t\t\t\t\tFlat added\n");
                                            fprintf(uttaraFlat,"Adress = %s\n",a1.adress);
                                            fprintf(uttaraFlat,"contact :01624498951\n\n");
                                            printf("\n\t\t\t\t\t\tconfirm flat?\n");
                                            printf("\n\t\t\t\t\t\t1.Yes\n");
                                            printf("\n\t\t\t\t\t\t2.No\n");
                                            fclose(uttaraFlat);
                                            printf("\n\t\t\t\t\t\tchose an option: ");
                                            scanf("%d",&n);
                                            system("cls");
                                        }

                                    }
                                    if(n==2)
                                    {

                                        n=0;

                                        mirpurFlat=fopen("mirpurflatdata.txt","a");
                                        if(mirpurFlat==NULL)
                                        {
                                            printf("file not created");
                                        }
                                        else
                                        {

                                            printf("\t\t\t\t\t\tDIGITAL RENTAL SYSTEM\n");
                                            fgetc(stdin);
                                            printf("\t\t\t\t\t\tHouse Name: ");
                                            fgets(a1.hname,20,stdin);
                                            a1.hname[strlen(a1.hname)-1]=0;
                                            fprintf(mirpurFlat,"House Name = %s\n\n",a1.hname);

                                            printf("\t\t\t\t\t\tEnter Full Adress: ");
                                            fgets(a1.adress,50,stdin);
                                            a1.adress[strlen(a1.adress)-1]=0;

                                            printf("\n\t\t\t\t\t\tEnter Flors: ");
                                            scanf("%s",a1.nflor);
                                            fprintf(mirpurFlat,"Flors = %s\n",a1.nflor);
                                            printf("\n\t\t\t\t\t\tEnter Number of Bed Room: ");
                                            scanf("%s",a1.nbed);
                                            fprintf(mirpurFlat,"Bed Rooms = %s\n",a1.nbed);
                                            printf("\n\t\t\t\t\t\tEnter Number of Bath Room: ");
                                            scanf("%s",a1.nbath);
                                            fprintf(mirpurFlat,"Bath rooms = %s\n",a1.nbath);
                                            printf("\n\t\t\t\t\t\tEnter Number of Drawing Room: ");
                                            scanf("%s",a1.ndrawingroom);
                                            fprintf(mirpurFlat,"Drawing rooms = %s\n",a1.ndrawingroom);
                                            printf("\n\t\t\t\t\t\tEnter Number of Dinning Room: ");
                                            scanf("%s",a1.ndinningroom);
                                            fprintf(mirpurFlat,"Dinning Rooms = %s\n",a1.ndinningroom);
                                            printf("\n\t\t\t\t\t\tEnter Number of Kitchen: ");
                                            scanf("%s",a1.nkitchen);
                                            fprintf(mirpurFlat,"Kitchens = %s\n",a1.nkitchen);
                                            printf("\n\t\t\t\t\t\tEnter Number of Balcony: ");
                                            scanf("%s",a1.nbalcony);
                                            fprintf(mirpurFlat,"Balconys = %s\n",a1.nbalcony);
                                            printf("\n\t\t\t\t\t\tEnter Monthly rent: ");
                                            scanf("%s",a1.mrent);
                                            fprintf(mirpurFlat,"Rent = %s\n",a1.mrent);

                                            printf("\n\t\t\t\t\t\tFlat added\n");
                                            fprintf(mirpurFlat,"Adress = %s\n",a1.adress);
                                            fprintf(mirpurFlat,"contact :01624498951\n\n");
                                            printf("\n\t\t\t\t\t\tconfirm flat?\n");
                                            printf("\n\t\t\t\t\t\t1.Yes\n");
                                            printf("\n\t\t\t\t\t\t2.No\n");
                                            fclose(mirpurFlat);
                                            printf("\n\t\t\t\t\t\tchose an option: ");
                                            scanf("%d",&n);
                                            system("cls");
                                        }

                                    }
                                    if(n==3)
                                    {

                                        n=0;

                                        khilkhetFlat=fopen("khilkhetdata.txt","a");
                                        if(khilkhetFlat==NULL)
                                        {
                                            printf("file not created");
                                        }
                                        else
                                        {

                                            printf("\t\t\t\t\t\tDIGITAL RENTAL SYSTEM\n");
                                            fgetc(stdin);
                                            printf("\t\t\t\t\t\tHouse Name: ");
                                            fgets(a1.hname,20,stdin);
                                            a1.hname[strlen(a1.hname)-1]=0;
                                            fprintf(khilkhetFlat,"House Name = %s\n\n",a1.hname);

                                            printf("\t\t\t\t\t\tEnter Full Adress: ");
                                            fgets(a1.adress,50,stdin);
                                            a1.adress[strlen(a1.adress)-1]=0;

                                            printf("\n\t\t\t\t\t\tEnter Flors: ");
                                            scanf("%s",a1.nflor);
                                            fprintf(khilkhetFlat,"Flors = %s\n",a1.nflor);
                                            printf("\n\t\t\t\t\t\tEnter Number of Bed Room: ");
                                            scanf("%s",a1.nbed);
                                            fprintf(khilkhetFlat,"Bed Rooms = %s\n",a1.nbed);
                                            printf("\n\t\t\t\t\t\tEnter Number of Bath Room: ");
                                            scanf("%s",a1.nbath);
                                            fprintf(khilkhetFlat,"Bath rooms = %s\n",a1.nbath);
                                            printf("\n\t\t\t\t\t\tEnter Number of Drawing Room: ");
                                            scanf("%s",a1.ndrawingroom);
                                            fprintf(khilkhetFlat,"Drawing rooms = %s\n",a1.ndrawingroom);
                                            printf("\n\t\t\t\t\t\tEnter Number of Dinning Room: ");
                                            scanf("%s",a1.ndinningroom);
                                            fprintf(khilkhetFlat,"Dinning Rooms = %s\n",a1.ndinningroom);
                                            printf("\n\t\t\t\t\t\tEnter Number of Kitchen: ");
                                            scanf("%s",a1.nkitchen);
                                            fprintf(khilkhetFlat,"Kitchens = %s\n",a1.nkitchen);
                                            printf("\n\t\t\t\t\t\tEnter Number of Balcony: ");
                                            scanf("%s",a1.nbalcony);
                                            fprintf(khilkhetFlat,"Balconys = %s\n",a1.nbalcony);
                                            printf("\n\t\t\t\t\t\tEnter Monthly rent: ");
                                            scanf("%s",a1.mrent);
                                            fprintf(khilkhetFlat,"Rent = %s\n",a1.mrent);

                                            printf("\n\t\t\t\t\t\tFlat added\n");
                                            fprintf(khilkhetFlat,"Adress = %s\n",a1.adress);
                                            fprintf(khilkhetFlat,"contact :01624498951\n\n");
                                            printf("\n\t\t\t\t\t\tconfirm flat?\n");
                                            printf("\n\t\t\t\t\t\t1.Yes\n");
                                            printf("\n\t\t\t\t\t\t2.No\n");
                                            fclose(khilkhetFlat);
                                            printf("\n\t\t\t\t\t\tchose an option: ");
                                            scanf("%d",&n);
                                            system("cls");
                                        }

                                    }
                                    if(n==4)
                                    {

                                        n=0;

                                        nikunjoFlat=fopen("nikunjodata.txt","a");
                                        if(nikunjoFlat==NULL)
                                        {
                                            printf("file not created");
                                        }
                                        else
                                        {

                                            printf("\t\t\t\t\t\tDIGITAL RENTAL SYSTEM\n");
                                            fgetc(stdin);
                                            printf("\t\t\t\t\t\tHouse Name: ");
                                            fgets(a1.hname,20,stdin);
                                            a1.hname[strlen(a1.hname)-1]=0;
                                            fprintf(nikunjoFlat,"House Name = %s\n\n",a1.hname);

                                            printf("\t\t\t\t\t\tEnter Full Adress: ");
                                            fgets(a1.adress,50,stdin);
                                            a1.adress[strlen(a1.adress)-1]=0;

                                            printf("\n\t\t\t\t\t\tEnter Flors: ");
                                            scanf("%s",a1.nflor);
                                            fprintf(nikunjoFlat,"Flors = %s\n",a1.nflor);
                                            printf("\n\t\t\t\t\t\tEnter Number of Bed Room: ");
                                            scanf("%s",a1.nbed);
                                            fprintf(nikunjoFlat,"Bed Rooms = %s\n",a1.nbed);
                                            printf("\n\t\t\t\t\t\tEnter Number of Bath Room: ");
                                            scanf("%s",a1.nbath);
                                            fprintf(nikunjoFlat,"Bath rooms = %s\n",a1.nbath);
                                            printf("\n\t\t\t\t\t\tEnter Number of Drawing Room: ");
                                            scanf("%s",a1.ndrawingroom);
                                            fprintf(nikunjoFlat,"Drawing rooms = %s\n",a1.ndrawingroom);
                                            printf("\n\t\t\t\t\t\tEnter Number of Dinning Room: ");
                                            scanf("%s",a1.ndinningroom);
                                            fprintf(nikunjoFlat,"Dinning Rooms = %s\n",a1.ndinningroom);
                                            printf("\n\t\t\t\t\t\tEnter Number of Kitchen: ");
                                            scanf("%s",a1.nkitchen);
                                            fprintf(nikunjoFlat,"Kitchens = %s\n",a1.nkitchen);
                                            printf("\n\t\t\t\t\t\tEnter Number of Balcony: ");
                                            scanf("%s",a1.nbalcony);
                                            fprintf(nikunjoFlat,"Balconys = %s\n",a1.nbalcony);
                                            printf("\n\t\t\t\t\t\tEnter Monthly rent: ");
                                            scanf("%s",a1.mrent);
                                            fprintf(nikunjoFlat,"Rent = %s\n",a1.mrent);

                                            printf("\n\t\t\t\t\t\tFlat added\n");
                                            fprintf(nikunjoFlat,"Adress = %s\n",a1.adress);
                                            fprintf(nikunjoFlat,"contact :01624498951\n\n");
                                            printf("\n\t\t\t\t\t\tconfirm flat?\n");
                                            printf("\n\t\t\t\t\t\t1.Yes\n");
                                            printf("\n\t\t\t\t\t\t2.No\n");
                                            fclose(nikunjoFlat);
                                            printf("\n\t\t\t\t\t\tchose an option: ");
                                            scanf("%d",&n);
                                            system("cls");
                                        }

                                    }
                                    if(n==5)
                                    {

                                        n=0;

                                        rampuraFlat=fopen("rampuradata.txt","a");
                                        if(rampuraFlat==NULL)
                                        {
                                            printf("file not created");
                                        }
                                        else
                                        {

                                            printf("\t\t\t\t\t\tDIGITAL RENTAL SYSTEM\n");
                                            fgetc(stdin);
                                            printf("\t\t\t\t\t\tHouse Name: ");
                                            fgets(a1.hname,20,stdin);
                                            a1.hname[strlen(a1.hname)-1]=0;
                                            fprintf(rampuraFlat,"House Name = %s\n\n",a1.hname);

                                            printf("\t\t\t\t\t\tEnter Full Adress: ");
                                            fgets(a1.adress,50,stdin);
                                            a1.adress[strlen(a1.adress)-1]=0;

                                            printf("\n\t\t\t\t\t\tEnter Flors: ");
                                            scanf("%s",a1.nflor);
                                            fprintf(rampuraFlat,"Flors = %s\n",a1.nflor);
                                            printf("\n\t\t\t\t\t\tEnter Number of Bed Room: ");
                                            scanf("%s",a1.nbed);
                                            fprintf(rampuraFlat,"Bed Rooms = %s\n",a1.nbed);
                                            printf("\n\t\t\t\t\t\tEnter Number of Bath Room: ");
                                            scanf("%s",a1.nbath);
                                            fprintf(rampuraFlat,"Bath rooms = %s\n",a1.nbath);
                                            printf("\n\t\t\t\t\t\tEnter Number of Drawing Room: ");
                                            scanf("%s",a1.ndrawingroom);
                                            fprintf(rampuraFlat,"Drawing rooms = %s\n",a1.ndrawingroom);
                                            printf("\n\t\t\t\t\t\tEnter Number of Dinning Room: ");
                                            scanf("%s",a1.ndinningroom);
                                            fprintf(rampuraFlat,"Dinning Rooms = %s\n",a1.ndinningroom);
                                            printf("\n\t\t\t\t\t\tEnter Number of Kitchen: ");
                                            scanf("%s",a1.nkitchen);
                                            fprintf(rampuraFlat,"Kitchens = %s\n",a1.nkitchen);
                                            printf("\n\t\t\t\t\t\tEnter Number of Balcony: ");
                                            scanf("%s",a1.nbalcony);
                                            fprintf(rampuraFlat,"Balconys = %s\n",a1.nbalcony);
                                            printf("\n\t\t\t\t\t\tEnter Monthly rent: ");
                                            scanf("%s",a1.mrent);
                                            fprintf(rampuraFlat,"Rent = %s\n",a1.mrent);

                                            printf("\n\t\t\t\t\t\tFlat added\n");
                                            fprintf(rampuraFlat,"Adress = %s\n",a1.adress);
                                            fprintf(rampuraFlat,"contact :01624498951\n\n");
                                            printf("\n\t\t\t\t\t\tconfirm flat?\n");
                                            printf("\n\t\t\t\t\t\t1.Yes\n");
                                            printf("\n\t\t\t\t\t\t2.No\n");
                                            fclose(rampuraFlat);
                                            printf("\n\t\t\t\t\t\tchose an option: ");
                                            scanf("%d",&n);
                                            system("cls");
                                        }

                                    }
                                    //
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
                                        if(n==5)
                                            exit(0);

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
                printf("\t\t\t\t\t\t3.Back\n");
                printf("\t\t\t\t\t\t4.Exit\n");
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
                                while(1)
                                {


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

                                        system("cls");

                                        if(n==1)
                                        {

                                            n=0;
                                            uttaraFlat=fopen("uttaraflatdata.txt","r");
                                            if(uttaraFlat==NULL)
                                            {
                                                printf("file not available");
                                            }else{
                                            printf("\t\t\t\t\t\tDIGITAL RENTAL SYSTEM\n");
                                            printf("Available Flats in Uttara\n\n");
                                            while(!feof(uttaraFlat)){
                                                uttara_ch=fgetc(uttaraFlat);
                                                printf("%c",uttara_ch);
                                            }
                                            fclose(uttaraFlat);



                                        }
                                        }
                                        if(n==2)
                                        {
                                            n=0;
                                            mirpurFlat=fopen("mirpurflatdata.txt","r");
                                            if(mirpurFlat==NULL)
                                            {
                                                printf("file not available");
                                            }else{
                                            printf("\t\t\t\t\t\tDIGITAL RENTAL SYSTEM\n");
                                            printf("Available Flats in Mirpur\n\n");
                                            while(!feof(mirpurFlat)){
                                                mirpur_ch=fgetc(mirpurFlat);
                                                printf("%c",mirpur_ch);
                                            }
                                            fclose(mirpurFlat);
                                        }
                                        }
                                        if(n==3)
                                        {
                                            n=0;
                                            khilkhetFlat=fopen("khilkhetdata.txt","r");
                                            if(khilkhetFlat==NULL)
                                            {
                                                printf("file not available");
                                            }else{
                                            printf("\t\t\t\t\t\tDIGITAL RENTAL SYSTEM\n");
                                            printf("Available Flats in Mirpur\n\n");
                                            while(!feof(khilkhetFlat)){
                                                khilkhet_ch=fgetc(khilkhetFlat);
                                                printf("%c",khilkhet_ch);
                                            }
                                            fclose(khilkhetFlat);
                                        }
                                        }
                                        if(n==4)
                                        {
                                            n=0;
                                            nikunjoFlat=fopen("nikunjodata.txt","r");
                                            if(nikunjoFlat==NULL)
                                            {
                                                printf("file not available");
                                            }else{
                                            printf("\t\t\t\t\t\tDIGITAL RENTAL SYSTEM\n");
                                            printf("Available Flats in Mirpur\n\n");
                                            while(!feof(nikunjoFlat)){
                                                nikunjo_ch=fgetc(nikunjoFlat);
                                                printf("%c",nikunjo_ch);
                                            }
                                            fclose(nikunjoFlat);
                                        }
                                        }
                                        if(n==5)
                                        {
                                            n=0;
                                            rampuraFlat=fopen("rampuradata.txt","r");
                                            if(rampuraFlat==NULL)
                                            {
                                                printf("file not available");
                                            }else{
                                            printf("\t\t\t\t\t\tDIGITAL RENTAL SYSTEM\n");
                                            printf("Available Flats in Mirpur\n\n");
                                            while(!feof(rampuraFlat)){
                                                rampura_ch=fgetc(rampuraFlat);
                                                printf("%c",rampura_ch);
                                            }
                                            fclose(rampuraFlat);
                                        }
                                        }

                                    }  //dot
                                    //last tenent stoped.


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

                                                system("cls");
                                            }
                                            if(n==3)  //why not working
                                            {
                                                n=0;
                                                break;
                                            }

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
                            if(n==3)
                            {
                                n=0;
                                break;
                            }
                            if(n==4);
                            exit(0);
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
            n=0;
            break;
        }
        if(option==4)
            exit(0);
    }
    return 0;
}
