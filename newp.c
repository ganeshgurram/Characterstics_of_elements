#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define MAX_SIZE 30

static int i=0;
struct logreg
{
char name[30],pass[30];
int highestscore;
}w[99];
int n;
void user();
void Users();
void login();
void reg();
void exam();
void data();
void Table();
void info();
void reaction();
void results();
void mainscreen2();
void mainscreen1();
void developer();

void developer(){


char name[30];
char pass[30];
k: 

printf("\n\n\t\t\t Username :");
scanf("%s",name);
if(!strcmp(name,"ganesh")|| !strcmp(name,"nikhil")){
    printf("\n\n\n\t\t\tPassword :");
    scanf("%s",pass);
    printf("%s",pass);
if(!strcmp(pass,"1234567890")){
system("cls");
printf("\n\n\n\n\n\t\t\t\tWELCOME TO COMMAND ON CHEMISTRY ");
printf("\n\t\t\t\t==============================");
printf("\n\n\n\n\t\t\tPress Enter to proceed...!!");
int c1=getchar();
if(c1==10)
  { }
P:
printf("\n\n\n\t\t\t1.Users\t\t2.Exit \n");
printf("\n\n\n\t\t\t\tENTER YOUR CHOICE: ");
int n;
scanf("%d",&n);
switch(n)
  {
    case 1: 
            Users();
            break;
    case 2:
            exit(0);
            break;
   default: printf("\n\n\t\t\t\tNO MATCH FOUND");
            printf("\n\n\t\t\tPress Enter to re-Enter the choice");
            if(getchar()==10)
                {goto P;}
	    break;
}
}
else {
system("cls");
printf(" Invalid Password ");
goto k;}}
else {
system("cls");	
printf(" INVALID  USERNAME ");
goto k;}
}



void Users()
{ struct logreg *p;
    FILE *fp;
    fp=fopen("coc_reg.txt","ab+");
    int i=0;
    while(!feof(fp) && i<100)
        {
          fread(&w[i],sizeof(w[i]),1,fp);    
          p=&w[i];
     printf(" \n\n \t\t Name             : %s \n",p->name);
}
P:
printf("\n\t\t1.Goto Mainscreen \t\t\t 2.Exit\n");
int n1;
scanf("%d",&n1);
switch(n1){
case 1: mainscreen1();
        break;
case 2:exit(0);
default : printf("Invalid input ");
          goto P;
     }}

    


   







void mainscreen1(){
system("cls");
printf("\n\n\n\n\n\t\t\t\tWELCOME TO COMMAND ON CHEMISTRY ");
printf("\n\t\t\t\t==============================");
printf("\n\n\n\n\t\t\tPress Enter to proceed...!!");
int c1=getchar();
if(c1==10)
  system("cls");
P:
printf("\n\n\n\t\t\t1.USER\t\t2. DEVELOPER\n");
printf("\n\n\n\t\t\t\tENTER YOUR CHOICE: ");
scanf("%d",&n);
switch(n)
  {
    case 1: system("cls");
        user();
        break;
    case 2: system("cls");
        developer();
        break;
     default: printf("\n\n\t\t\t\tNO MATCH FOUND");
        printf("\n\n\t\t\tPress Enter to re-Enter the choice");
        if(getchar()==10)
        system("cls");
        goto P;
}
}
void user()
{
system("cls");
printf("\n\n\n\n\n\t\t\t\tWELCOME TO COMMAND ON CHEMISTRY USERS ");
printf("\n\t\t\t\t=====================");
printf("\n\n\n\n\t\t\tPress Enter to proceed...!!");
int c1=getchar();
if(c1==10)
  system("cls");
XY:
printf("\n\n\n\t\t\t1. LOGIN\t\t2. REGISTER");
printf("\n\n\n\t\t\t\tENTER YOUR CHOICE: ");
scanf("%d",&n);
switch(n)
  {
    case 1: system("cls");
        login();
        break;
    case 2: system("cls");
        reg();
        break;
    default: printf("\n\n\t\t\t\tNO MATCH FOUND");
        printf("\n\n\t\t\tPress Enter to re-Enter the choice");
        if(getchar()==10)
        system("cls");
        goto XY;
  }
}
void reg()
  {
    FILE *fp;
    char c; int k1=0,z=0;
    char checker[30];
    fp=fopen("coc_reg.txt","ab+");
    printf("\n\n\t\t\t\tWELCOME TO REGISTER ZONE");
    printf("\n\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^");
      printf("\n\n\t\t\t\t  ENTER USERNAME: ");
             scanf("%s",checker);
      int i=0;   
      while(!feof(fp) && i<100)
        {
          fread(&w[i],sizeof(w[i]),1,fp);
          if(strcmp(checker,w[i].name)==0)
            {
            printf("\n\n\t\t\tUSERNAME ALREDY EXISTS");
           
            reg();
           }
          else if(w[i].name != NULL)
           {
            i++;
            continue;}}
            
           if(strcmp(checker,w[i].name)!=0)
                strcpy(w[i].name,checker);
      
      printf("\n\n\t\t\t\t  DESIRED PASSWORD: ");
        scanf("%s",w[i].pass);    
      fwrite(&w[i],sizeof(w[i]),1,fp);
      fclose(fp);
      printf("\n\n\tPress enter if you agree with Username and Password");
      if((getchar())==10)
        {
        system("cls");
        printf("\n\n\t\tYou are successfully registered");
        printf("\n\n\t\tTry login your account??\n\n\t\t  ");
        printf("> PRESS 1 FOR YES\n\n\t\t  > PRESS 2 FOR NO\n\n\t\t\t\t");
        scanf("%d",&n);
        switch(n)
          {
              case 1: system("cls");
                    login();
                    break;
              case 2: system("cls");
                    printf("\n\n\n\t\t\t\t\tTHANK YOU FOR REGISTERING");
                    break;
          }
        }
    getchar();
  }
  void login()
    {
      FILE *fp;
      char c,name[30],pass[30]; int z=0;
      int checku,checkp;
      fp=fopen("coc_reg.txt","rb");
      printf("\n\n\t\t\t\tWELCOME TO LOG IN ZONE");
      printf("\n\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^");
        printf("\n\n\t\t\t\t  ENTER USERNAME: ");
        scanf("%s",name);
        printf("\n\n\t\t\t\t  ENTER PASSWORD: ");
        scanf("%s",pass);
        int i=0;
      while(!feof(fp) && i<100)
        { 
        fread(&w[i],sizeof(w[i]),1,fp);
          checku=strcmp(name,w[i].name);
          checkp=strcmp(pass,w[i].pass);
     
          if(checku==0&&checkp==0)
          {
            system("cls");
            printf("\n\n\n\t\t\tYOU HAVE LOGGED IN SUCCESSFULLY!!");
            printf("\n\n\n\t\t\t\tWELCOME, HAVE A NICE DAY\n\n");
            mainscreen2();
            exit(0);
          }
        else if(checku==0&&checkp!=0)
          {
            printf("\n\n\n\t\t\tWRONG PASSWORD!! Not %s??",name);
            printf("\n\n\t\t\t\t  (Press 'Y' to re-login)");
	    printf("\n\t\t\t\tpress any other key to register");
            char c;
            scanf(" %c",&c);
            if(c=='y' || c=='Y')
              login();
          }
          i++;}
        
         if(checku!=0)
          {
            printf("\n\n\n\t\t\tYou are not a Registered User\n \t\t\tPlease register yourself\n");
            if(getchar()==10)
         
            reg();
          }
      
      getchar();
   }

void mainscreen2(){
system("cls");
printf("\n\n\n\t\t\t\t\t\t\t\tPROFILE");
printf("\n\n\n\n\n\t\t\t\tPLEASE SELECT ANY ONE FROM BELOW ");
int c1=getchar();
XY:
printf("\n\n\n\t\t\t1. EXAM\n\n\t\t\t2. INFO\n\n\t\t\t 3. REACTION \n\n\t\t\t 4.RESULTS\n\n\t\t\t 5.EXIT");
printf("\n\n\n\t\t\t\tENTER YOUR CHOICE: ");
scanf("%d",&n);
switch(n)
  {
    case 1: system("cls");
          exam(&w[i]);
          break;
    case 2: system("cls");
          info();
          break;
    case 3: system("cls");
           reaction();
           getchar();
            break;
    case 4: system("cls");
            results(&w[i]);
            getchar();
            break;
    case 5: system("cls");
            exit(0);
            break;
    default: printf("\n\n\t\t\t\tNO MATCH FOUND");
             printf("\n\n\t\t\tPress Enter to re-Enter the choice");
             if(getchar()==10)
             
             goto XY;
  }
  x:
  printf("\n\n Enter Y/y for goback to PROFILE \n");
  char q;
  scanf("%c",&q);
  if(q=='y' ||q=='Y')
     mainscreen2();
  else  
     goto x;
}


void Table(char *Name, double Number, int Group, int Period, char *Formula ,char *Charge, double Mass, int Neutrons, char *Special)
{
Neutrons = (Mass - Number);
system("cls");
printf(" Element Name:  %s \n", Name);
printf(" Formula:       %s\n" ,Formula);
printf(" Atomic Number:  %f\n",Number);
printf(" Atomic Mass:    %f\n",Mass);
printf(" Group:          %d\n",Group);
printf(" Period:         %d\n",Period);
printf(" Charge:         %s\n",Charge);
printf(" Neutrons:       %d\n",Neutrons);
if (strcmp(Special,"None"))
{
printf(" Note:          %s\n",Special);
}  
}
void develops(){
return;
}

void data(char*Command)
 {
double Number;
int Group;
int Period;
double Mass;
int Neutrons;
if (!strcmp(Command,"1") || !strcmp(Command ,"hydrogen") || !strcmp(Command, "H"))
{
char Name[] = "hydrogen";
Number = 1;
Group = 1;
Period = 1;
char Formula[] = "H";
char Charge[] = "1+";
Mass = 1.01;
char Special[] = "Diatomic";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"2") || !strcmp(Command,"helium") || !strcmp(Command,"He"))
{
char Name[] = "helium";
Number = 2;
Group = 18;
Period = 1;
char Formula[] = "He";
char Charge[] = "0";
Mass = 4.00;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);}
else if (!strcmp(Command,"3") || !strcmp(Command,"lithium") || !strcmp(Command,"Li"))
{
char Name[] = "lithium";
Number = 3;
Group = 1;
Period = 2;
char Formula[] = "Li";
char Charge[] = "1+";
Mass = 6.94;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"4") || !strcmp(Command,"beryllium") || !strcmp(Command,"Be"))
{
char Name[] = "beryllium";
Number = 4;
Group = 2;
Period = 2;
char Formula[] = "Be";
char Charge[] = "2+";
Mass = 9.01;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"5") || !strcmp(Command,"boron") || !strcmp(Command,"B"))
{
char Name[] = "boron";
Number = 5;
Group = 13;
Period = 2;
char Formula[] = "B";
char Charge[] = "3+";
Mass = 10.81;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"6") || !strcmp(Command,"carbon") || !strcmp(Command,"C"))
{
char Name[] = "carbon";
Number = 6;
Group = 14;
Period = 2;
char Formula[] = "C";
char Charge[] = "4+";
Mass = 12.01;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"7") || !strcmp(Command,"nitrogen") || !strcmp(Command,"N"))
{
char Name[] = "nitrogen";
Number = 7;
Group = 15;
Period = 2;
char Formula[] = "N";
char Charge[] = "3-";
Mass = 14.01;
char Special[] = "Diatomic";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"8") || !strcmp(Command,"oxygen") || !strcmp(Command,"O"))
{
char Name[] = "oxygen";
Number = 8;
Group = 16;
Period = 2;
char Formula[] = "O";
char Charge[] = "2-";
Mass = 16.00;
char Special[] = "Diatomic";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"9") || !strcmp(Command,"flourine") || !strcmp(Command,"F"))
{
char Name[] = "fluorine";
Number = 9;
Group = 17;
Period = 2;
char Formula[] = "F";
char Charge[] = "1-";
Mass = 19.00;
char Special[] = "Diatomic";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"10") || !strcmp(Command,"neon") || !strcmp(Command,"Ne"))
{
char Name[] = "neon";
Number = 10;
Group = 18;
Period = 2;
char Formula[] = "Ne";
char Charge[] = "0";
Mass = 20.18;
char Special[] = "Noble Gas";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"11") || !strcmp(Command,"sodium") || !strcmp(Command,"Na"))
{
char Name[] = "sodium";
Number = 11;
Group = 1;
Period = 3;
char Formula[] = "Na";
char Charge[] = "1+";
Mass = 22.99;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"12") || !strcmp(Command,"magnesium") || !strcmp(Command,"Mg"))
{
char Name[] = "magnesium";
Number = 12;
Group = 2;
Period = 3;
char Formula[] = "Mg";
char Charge[] = "2+";
Mass = 24.31;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"13") || !strcmp(Command,"aluminum") || !strcmp(Command,"Al"))
{
char Name[] = "aluminum";
Number = 13;
Group = 13;
Period = 3;
char Formula[] = "Al";
char Charge[] = "3+";
Mass = 26.98;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"14") || !strcmp(Command,"silicon") || !strcmp(Command,"Si"))
{
char Name[] = "silicon";
Number = 14;
Group = 14;
Period = 3;
char Formula[] = "Si";
char Charge[] = "4+";
Mass = 28.09;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"15") || !strcmp(Command,"phosphorous") || !strcmp(Command,"P"))
{
char Name[] = "phosphorus";
Number = 15;
Group = 15;
Period = 3;
char Formula[] = "P";
char Charge[] = "3-";
Mass = 30.97;
char Special[] = "Diatomic";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"16") || !strcmp(Command,"sulfur") || !strcmp(Command,"S"))
{
char Name[] = "sulfur";
Number = 16;
Group = 16;
Period = 3;
char Formula[] = "S";
char Charge[] = "2-";
Mass = 32.06;
char Special[] = "Diatomic";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"17") || !strcmp(Command,"chlorine") || !strcmp(Command,"Cl"))
{
char Name[] = "chlorine";
Number = 17;
Group = 17;
Period = 3;
char Formula[] = "Cl";
char Charge[] = "1-";
Mass = 35.45;
char Special[] = "Diatomic";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"18") || !strcmp(Command,"argon") || !strcmp(Command,"Ar"))
{
char Name[] = "argon";
Number = 18;
Group = 18;
Period = 3;
char Formula[] = "Ar";
char Charge[] = "0";
Mass = 39.95;
char Special[] = "Noble Gas";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"19") || !strcmp(Command,"potassium") || !strcmp(Command,"K"))
{
char Name[] = "potassium";
Number = 19;
Group = 1;
Period = 4;
char Formula[] = "K";
char Charge[] = "1+";
Mass = 39.10;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"20") || !strcmp(Command,"calcium") || !strcmp(Command,"Ca"))
{
char Name[] = "calcium";
Number = 20;
Group = 2;
Period = 4;
char Formula[] = "Ca";
char Charge[] = "2+";
Mass = 40.08;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"21") || !strcmp(Command,"scandium") || !strcmp(Command,"Sc"))
{
char Name[] = "scandium";
Number = 21;
Group = 3;
Period = 4;
char Formula[] = "Sc";
char Charge[] = "3+";
Mass = 44.96;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"22") || !strcmp(Command,"titanium") || !strcmp(Command,"Ti"))
{
char Name[] = "titanium";
Number = 22;
Group = 4;
Period = 4;
char Formula[] = "Ti";
char Charge[] = "4+ \\ 3+";
Mass = 47.88;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"23") || !strcmp(Command,"vanadium") || !strcmp(Command,"V"))
{
char Name[] = "vanadium";
Number = 23;
Group = 5;
Period = 4;
char Formula[] = "V";
char Charge[] = "5+ \\ 4+";
Mass = 50.94;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"24") || !strcmp(Command,"chromium") || !strcmp(Command,"Cr"))
{
char Name[] = "chromium";
Number = 24;
Group = 6;
Period = 4;
char Formula[] = "Cr";
char Charge[] = "3+ \\ 2+";
Mass = 52.00;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"25") || !strcmp(Command,"manganese") || !strcmp(Command,"Mn"))
{
char Name[] = "manganese";
Number = 25;
Group = 7;
Period = 4;
char Formula[] = "Mn";
char Charge[] = "2+ \\ 4+";
Mass = 54.94;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"26") || !strcmp(Command,"iron") || !strcmp(Command,"Fe"))
{
char Name[] = "iron";
Number = 26;
Group = 8;
Period = 4;
char Formula[] = "Fe";
char Charge[] = "3+ \\ 2+";
Mass = 55.85;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"27") || !strcmp(Command,"cobalt") || !strcmp(Command,"Co"))
{
char Name[] = "cobalt";
Number = 27;
Group = 9;
Period = 4;
char Formula[] = "Co";
char Charge[] = "2+ \\ 3+";
Mass = 58.93;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"28") || !strcmp(Command,"nickel") || !strcmp(Command,"Ni"))
{
char Name[] = "nickel";
Number = 28;
Group = 10;
Period = 4;
char Formula[] = "Ni";
char Charge[] = "2+ \\ 3+";
Mass = 58.69;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"29") || !strcmp(Command,"copper") || !strcmp(Command,"Cu"))
{
char Name[] = "copper";
Number = 29;
Group = 11;
Period = 4;
char Formula[] = "Cu";
char Charge[] = "2+ \\ 1+";
Mass = 63.55;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"30") || !strcmp(Command,"zinc") || !strcmp(Command,"Zn"))
{
char Name[] = "zinc";
Number = 30;
Group = 12;
Period = 4;
char Formula[] = "Zn";
char Charge[] = "2+";
Mass = 65.38;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"31") || !strcmp(Command,"gallium") || !strcmp(Command,"Ga"))
{
char Name[] = "gallium";
Number = 31;
Group = 13;
Period = 4;
char Formula[] = "Ga";
char Charge[] = "3+";
Mass = 69.72;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"32") || !strcmp(Command,"germanium") || !strcmp(Command,"Ge"))
{
char Name[] = "germanium";
Number = 32;
Group = 14;
Period = 4;
char Formula[] = "Ge";
char Charge[] = "4+";
Mass = 72.61;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"33") || !strcmp(Command,"arsonic") || !strcmp(Command,"As"))
{
char Name[] = "arsonic";
Number = 33;
Group = 15;
Period = 4;
char Formula[] = "As";
char Charge[] = "3-";
Mass = 74.92;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"34") || !strcmp(Command,"selenium") || !strcmp(Command,"Se"))
{
char Name[] = "selenium";
Number = 34;
Group = 16;
Period = 4;
char Formula[] = "Se";
char Charge[] = "2-";
Mass = 78.96;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"35") || !strcmp(Command,"bromine") || !strcmp(Command,"Br"))
{
char Name[] = "bromine";
Number = 35;
Group = 17;
Period = 4;
char Formula[] = "Br";
char Charge[] = "1-";
Mass = 79.90;
char Special[] = "Diatomic";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"36") || !strcmp(Command,"krypton") || !strcmp(Command,"Kr"))
{
char Name[] = "krypton";
Number = 36;
Group = 18;
Period = 4;
char Formula[] = "Kr";
char Charge[] = "0";
Mass = 83.80;
char Special[] = "Noble Gas";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"37") || !strcmp(Command,"rubidium") || !strcmp(Command,"Rb"))
{
char Name[] = "rubidium";
Number = 37;
Group = 1;
Period = 5;
char Formula[] = "Rb";
char Charge[] = "1+";
Mass = 85.47;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"38") || !strcmp(Command,"stronthum") || !strcmp(Command,"Sr"))
{
char Name[] = "stronthum";
Number = 38;
Group = 2;
Period = 5;
char Formula[] = "Sr";
char Charge[] = "2+";
Mass = 87.62;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"39") || !strcmp(Command,"ythrium") || !strcmp(Command,"Y"))
{
char Name[] = "ythrium";
Number = 39;
Group = 3;
Period = 5;
char Formula[] = "Y";
char Charge[] = "3+";
Mass = 88.91;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"40") || !strcmp(Command,"zirconium") || !strcmp(Command,"Zr"))
{
char Name[] = "zirconium";
Number = 40;
Group = 4;
Period = 5;
char Formula[] = "Zr";
char Charge[] = "4+";
Mass = 91.22;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"41") || !strcmp(Command,"niobium") || !strcmp(Command,"Nb"))
{
char Name[] = "niobium";
Number = 41;
Group = 5;
Period = 5;
char Formula[] = "Nb";
char Charge[] = "5+ \\ 3+";
Mass = 92.91;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"42") || !strcmp(Command,"molybdenum") || !strcmp(Command,"Mo"))
{
char Name[] = "molybdenum";
Number = 42;
Group = 6;
Period = 5;
char Formula[] = "Mo";
char Charge[] = "6+";
Mass = 95.94;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"43") || !strcmp(Command,"techenium") || !strcmp(Command,"Tc"))
{
char Name[] = "techenium";
Number = 43;
Group = 7;
Period = 5;
char Formula[] = "Tc";
char Charge[] = "7+";
Mass = 98.91;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"44") || !strcmp(Command,"ruthenium") || !strcmp(Command,"Ru"))
{
char Name[] = "ruthenium";
Number = 44;
Group = 8;
Period = 5;
char Formula[] = "Ru";
char Charge[] = "3+ \\ 4+";
Mass = 101.07;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"45") || !strcmp(Command,"rhodium") || !strcmp(Command,"Rh"))
{
char Name[] = "rhodium";
Number = 45;
Group = 9;
Period = 5;
char Formula[] = "Rh";
char Charge[] = "3+";
Mass = 102.91;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"46") || !strcmp(Command,"palladium") || !strcmp(Command,"Pd"))
{
char Name[] = "palladium";
Number = 46;
Group = 10;
Period = 5;
char Formula[] = "Pd";
char Charge[] = "2+ \\ 4+";
Mass = 106.42;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"47") || !strcmp(Command,"silver") || !strcmp(Command,"Ag"))
{
char Name[] = "silver";
Number = 47;
Group = 11;
Period = 5;
char Formula[] = "Ag";
char Charge[] = "1+";
Mass = 107.87;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"48") || !strcmp(Command,"cadmium") || !strcmp(Command,"Cd"))
{
char Name[] = "cadmium";
Number = 48;
Group = 12;
Period = 5;
char Formula[] = "Cd";
char Charge[] = "2+";
Mass = 112.41;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"49") || !strcmp(Command,"indium") || !strcmp(Command,"In"))
{
char Name[] = "indium";
Number = 49;
Group = 13;
Period = 5;
char Formula[] = "In";
char Charge[] = "3+";
Mass = 114.82;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"50") || !strcmp(Command,"tin") || !strcmp(Command,"Sn"))
{
char Name[] = "tin";
Number = 50;
Group = 14;
Period = 5;
char Formula[] = "Sn";
char Charge[] = "4+ \\ 2+";
Mass = 118.69;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"51") || !strcmp(Command,"antimony") || !strcmp(Command,"Sb"))
{
char Name[] = "antimony";
Number = 51;
Group = 15;
Period = 5;
char Formula[] = "Sb";
char Charge[] = "3+ \\ 5+";
Mass = 121.75;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"52") || !strcmp(Command,"tellurium") || !strcmp(Command,"Te"))
{
char Name[] = "tellurium";
Number = 52;
Group = 16;
Period = 5;
char Formula[] = "Te";
char Charge[] = "2-";
Mass = 127.60;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"53") || !strcmp(Command,"iodine") || !strcmp(Command,"I"))
{
char Name[] = "iodine";
Number = 53;
Group = 17;
Period = 5;
char Formula[] = "I";
char Charge[] = "1-";
Mass = 126.90;
char Special[] = "Diatomic";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"54") || !strcmp(Command,"xenon") || !strcmp(Command,"Xe"))
{
char Name[] = "xenon";
Number = 54;
Group = 18;
Period = 5;
char Formula[] = "Xe";
char Charge[] = "0";
Mass = 131.29;
char Special[] = "Noble Gas";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"55") || !strcmp(Command,"cosium") || !strcmp(Command,"Cs"))
{
char Name[] = "cosiumn";
Number = 55;
Group = 1;
Period = 6;
char Formula[] = "Cs";
char Charge[] = "1+";
Mass = 132.91;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"56") || !strcmp(Command,"barium") || !strcmp(Command,"Ba"))
{
char Name[] = "barium";
Number = 56;
Group = 2;
Period = 6;
char Formula[] = "Ba";
char Charge[] = "2+";
Mass = 137.33;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"57") || !strcmp(Command,"lanthanum") || !strcmp(Command,"La"))
{
char Name[] = "lanthanum";
Number = 57;
Group = 3;
Period = 6;
char Formula[] = "La";
char Charge[] = "3+";
Mass = 138.91;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"58") || !strcmp(Command,"cerium") || !strcmp(Command,"Ce"))
{
char Name[] = "cerium";
Number = 58;
Group = 5;
Period = 6;
char Formula[] = "Ce";
char Charge[] = "3+";
Mass = 140.12;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"59") || !strcmp(Command,"pruseodymium") || !strcmp(Command,"Pr"))
{
char Name[] = "pruseodymium";
Number = 59;
Group = 6;
Period = 6;
char Formula[] = "Pr";
char Charge[] = "3+";
Mass = 140.91;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"60") || !strcmp(Command,"neodymium") || !strcmp(Command,"Nd"))
{
char Name[] = "neodymium";
Number = 60;
Group = 7;
Period = 6;
char Formula[] = "Nd";
char Charge[] = "3+";
Mass = 144.24;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"61") || !strcmp(Command,"promethium") || !strcmp(Command,"Pm"))
{
char Name[] = "promethium";
Number = 61;
Group = 8;
Period = 6;
char Formula[] = "Pm";
char Charge[] = "3+";
Mass = 145;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"62") || !strcmp(Command,"samarium") || !strcmp(Command,"Sm"))
{
char Name[] = "samarium";
Number = 62;
Group = 9;
Period = 6;
char Formula[] = "Sm";
char Charge[] = "3+ \\ 2+";
Mass = 150.40;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"63") || !strcmp(Command,"europium") || !strcmp(Command,"Eu"))
{
char Name[] = "europium";
Number = 63;
Group = 10;
Period = 6;
char Formula[] = "Eu";
char Charge[] = "3+ \\ 2+";
Mass = 151.97;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"64") || !strcmp(Command,"gadolinium") || !strcmp(Command,"Gd"))
{
char Name[] = "gadolinium";
Number = 64;
Group = 11;
Period = 6;
char Formula[] = "Gd";
char Charge[] = "3+";
Mass = 157.25;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"65") || !strcmp(Command,"terbium") || !strcmp(Command,"Tb"))
{
char Name[] = "terbium";
Number = 65;
Group = 12;
Period = 6;
char Formula[] = "Tb";
char Charge[] = "3+";
Mass = 158.93;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"66") || !strcmp(Command,"dysprosium") || !strcmp(Command,"Dy"))
{
char Name[] = "dysprosium";
Number = 66;
Group = 13;
Period = 6;
char Formula[] = "Dy";
char Charge[] = "3+";
Mass = 162.50;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"67") || !strcmp(Command,"helmium") || !strcmp(Command,"Ho"))
{
char Name[] = "helmium";
Number = 67;
Group = 14;
Period = 6;
char Formula[] = "Ho";
char Charge[] = "3+";
Mass = 164.93;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"68") || !strcmp(Command,"erbium") || !strcmp(Command,"Er"))
{
char Name[] = "erbium";
Number = 68;
Group = 15;
Period = 6;
char Formula[] = "Er";
char Charge[] = "3+";
Mass = 167.26;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"69") || !strcmp(Command,"thulium") || !strcmp(Command,"Tm"))
{
char Name[] = "thulium";
Number = 69;
Group = 16;
Period = 6;
char Formula[] = "Tm";
char Charge[] = "3+";
Mass = 168.94;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"70") || !strcmp(Command,"ytlerhium") || !strcmp(Command,"Yb"))
{
char Name[] = "ytlerhium";
Number = 70;
Group = 17;
Period = 6;
char Formula[] = "Yb";
char Charge[] = "3+ \\ 2+";
Mass = 173.04;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"71") || !strcmp(Command,"lutelium") || !strcmp(Command,"Lu"))
{
char Name[] = "lutelium";
Number = 71;
Group = 18;
Period = 6;
char Formula[] = "Lu";
char Charge[] = "3+";
Mass = 174.97;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"72") || !strcmp(Command,"hefnium") || !strcmp(Command,"Hf"))
{
char Name[] = "hefnium";
Number = 72;
Group = 4;
Period = 6;
char Formula[] = "Hf";
char Charge[] = "4+";
Mass = 178.49;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"73") || !strcmp(Command,"tantalum") || !strcmp(Command,"Ta"))
{
char Name[] = "tantalum";
Number = 73;
Group = 5;
Period = 6;
char Formula[] = "Ta";
char Charge[] = "5+";
Mass = 180.95;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"74") || !strcmp(Command,"wolfrum") || !strcmp(Command,"tungsten") || !strcmp(Command,"W"))
{
char Name[] = "wolfrum (tungsten)";
Number = 74;
Group = 6;
Period = 6;
char Formula[] = "W";
char Charge[] = "6+";
Mass = 183.85;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"75") || !strcmp(Command,"rhenium") || !strcmp(Command,"Re"))
{
char Name[] = "rhenium";
Number = 75;
Group = 7;
Period = 6;
char Formula[] = "Re";
char Charge[] = "7+";
Mass = 186.21;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"76") || !strcmp(Command,"osmium") || !strcmp(Command,"Os"))
{
char Name[] = "osmium";
Number = 76;
Group = 8;
Period = 6;
char Formula[] = "Os";
char Charge[] = "4+";
Mass = 190.2;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"77") || !strcmp(Command,"iridium") || !strcmp(Command,"Ir"))
{
char Name[] = "iridium";
Number = 77;
Group = 9;
Period = 6;
char Formula[] = "Ir";
char Charge[] = "4+";
Mass = 192.22;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"78") || !strcmp(Command,"platinum") || !strcmp(Command,"Pt"))
{
char Name[] = "platinum";
Number = 78;
Group = 10;
Period = 6;
char Formula[] = "Pt";
char Charge[] = "4+ \\ 2+";
Mass = 195.08;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"79") || !strcmp(Command,"gold") || !strcmp(Command,"Au"))
{
char Name[] = "gold";
Number = 79;
Group = 11;
Period = 6;
char Formula[] = "Au";
char Charge[] = "3+ \\ 1+";
Mass = 196.97;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"80") || !strcmp(Command,"mercury") || !strcmp(Command,"Mg"))
{
char Name[] = "mercury";
Number = 80;
Group = 12;
Period = 6;
char Formula[] = "Hg";
char Charge[] = "2+ \\ 1+";
Mass = 200.59;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"81") || !strcmp(Command,"thallium") || !strcmp(Command,"Tl"))
{
char Name[] = "thallium";
Number = 81;
Group = 13;
Period = 6;
char Formula[] = "Tl";
char Charge[] = "1+ \\ 3+";
Mass = 204.38;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"82") || !strcmp(Command,"lead") || !strcmp(Command,"Pb"))
{
char Name[] = "lead";
Number = 82;
Group = 14;
Period = 6;
char Formula[] = "Pb";
char Charge[] = "2+ \\ 4+";
Mass = 207.20;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"83") || !strcmp(Command,"bismuth") || !strcmp(Command,"Bi"))
{
char Name[] = "bismuth";
Number = 83;
Group = 15;
Period = 6;
char Formula[] = "Bi";
char Charge[] = "3+ \\ 5+";
Mass = 208.98;
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"84") || !strcmp(Command,"polonium") || !strcmp(Command,"Po"))
{
char Name[] = "polonium";
Number = 84;
Group = 16;
Period = 6;
char Formula[] = "Po";
char Charge[] = "2+ \\ 4+";
Mass = 209;   
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"85") || !strcmp(Command,"asiatine") || !strcmp(Command,"At"))
{
char Name[] = "asiatine";
Number = 85;
Group = 17;
Period = 6;
char Formula[] = "At";
char Charge[] = "1-";
Mass = 210;   
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"86") || !strcmp(Command,"radon") || !strcmp(Command,"Rn"))
{
char Name[] = "radon";
Number = 86;
Group = 18;
Period = 6;
char Formula[] = "Rn";
char Charge[] = "0";
Mass = 222;   
char Special[] = "Noble Gas";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"87") || !strcmp(Command,"fruncium") || !strcmp(Command,"Fr"))
{
char Name[] = "fruncium";
Number = 87;
Group = 1;
Period = 7;
char Formula[] = "Fr";
char Charge[] = "1+";
Mass = 223;   
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"88") || !strcmp(Command,"radium") || !strcmp(Command,"Ra"))
{
char Name[] = "radium";
Number = 88;
Group = 2;
Period = 7;
char Formula[] = "Ra";
char Charge[] = "2+";
Mass = 226.03;   
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"89") || !strcmp(Command,"actinium") || !strcmp(Command,"Ac"))
{
char Name[] = "actinium";
Number = 89;
Group = 3;
Period = 7;
char Formula[] = "Ac";
char Charge[] = "3+";
Mass = 227.03;   
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"90") || !strcmp(Command,"thorlum") || !strcmp(Command,"Th"))
{
char Name[] = "thorlum";
Number = 90;
Group = 5;
Period = 7;
char Formula[] = "Th";
char Charge[] = "4+";
Mass = 232.04;   
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"91") || !strcmp(Command,"protactinium") || !strcmp(Command,"Pa"))
{
char Name[] = "protactinium";
Number = 91;
Group = 6;
Period = 7;
char Formula[] = "Pa";
char Charge[] = "5+ \\ 4+";
Mass = 231.04;   
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"92") || !strcmp(Command,"uranium") || !strcmp(Command,"U"))
{
char Name[] = "uranium";
Number = 92;
Group = 7;
Period = 7;
char Formula[] = "U";
char Charge[] = "6+ \\ 4+";
Mass = 238.03;   
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"93") || !strcmp(Command,"neplunium") || !strcmp(Command,"Np"))
{
char Name[] = "neplunium";
Number = 93;
Group = 8;
Period = 7;
char Formula[] = "Np";
char Charge[]= "5+";
Mass = 237.05;   
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"94") || !strcmp(Command,"plutonium") || !strcmp(Command ,"Pu"))
{
char Name[] = "plutonium";
Number = 94;
Group = 9;
Period = 7;
char Formula[] = "Pu";
char Charge[] = "4+ \\ 6+";
Mass = 244;   
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"95") || !strcmp(Command,"americium") || !strcmp(Command,"Am"))
{
char Name[] = "americium";
Number = 95;
Group = 10;
Period = 7;
char Formula[] = "Am";
char Charge[] = "3+ \\ 4+";
Mass = 244;   
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"96") || !strcmp(Command,"curium") || !strcmp(Command,"Cm"))
{
char Name[] = "curium";
Number = 96;
Group = 11;
Period = 7;
char Formula[] = "Cm";
char Charge[] = "3+";
Mass = 247;   
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"97") || !strcmp(Command,"borkelium") || !strcmp(Command,"Bk"))
{
char Name[] = "borkelium";
Number = 97;
Group = 12;
Period = 7;
char Formula[] = "Bk";
char Charge[] = "3+ \\ 4+";
Mass = 247;   
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"98") || !strcmp(Command,"californium") || !strcmp(Command,"Cf"))
{
char Name[] = "californium";
Number = 98;
Group = 13;
Period = 7;
char Formula[] = "Cf";
char Charge[] = "3+";
Mass = 251;   
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"99") || !strcmp(Command,"einsteinium") || !strcmp(Command,"Es"))
{
char Name[] = "einsteinium";
Number = 99;
Group = 14;
Period = 7;
char Formula[] = "Es";
char Charge[] = "3+";
Mass = 252;   
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"100") || !strcmp(Command,"formium") || !strcmp(Command,"Fm"))
{
char Name[] = "formium";
Number = 100;
Group = 15;
Period = 7;
char Formula[] = "Fm";
char Charge[] = "3+";
Mass = 257;   
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"101") || !strcmp(Command,"mendelevium") || !strcmp(Command,"Md"))
{
char Name[] = "mendelevium";
Number = 101;
Group = 16;
Period = 7;
char Formula[] = "Md";
char Charge[]= "2+ \\ 3+";
Mass = 258;   
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"102") || !strcmp(Command,"nebelium") || !strcmp(Command,"No"))
{
char Name[] = "nebelium";
Number = 102;
Group = 17;
Period = 7;
char Formula[] = "No";
char Charge[] = "2+ \\ 3+";
Mass = 259;   
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else if (!strcmp(Command,"103") || !strcmp(Command,"lawrencium") || !strcmp(Command,"Lr"))
{
char Name[] = "lawrencium";
Number = 103;
Group = 18;
Period = 7;
char Formula[] = "Lr";
char Charge[] = "3+";
Mass = 260;   
char Special[] = "None";
Table (Name, Number, Group, Period, Formula, Charge, Mass, Neutrons, Special);
}
else 
   {       printf("INVALID INPUT");
	   printf(" \n\nAfter 103rd Element, There is no much importance  of above 103rd element,but we can say they are radioactive\n\n");
   develops();
   return ; 
   }

}
   
void info(){
printf(" \n_______________________________________________ Welcome to info________________________________________________________\n");
char element[30];
d:
printf("\n Enter the element atomic number or name or Formula to search Element : ");
scanf("%s",element);
data(element);
k:
printf(" \n Enter y/Y to  search again \n  Enter N/n to stop : \n");
getchar();
char c;
scanf("%c",&c);
if(c=='y' ||c=='Y')
   goto d;
else if(c=='N' || c=='n') 
     mainscreen2();
else 
   goto k; 
      }

void reaction()
{    
	int s,a,b;
     WER:	
     printf("Select  group number from 1A ,2A or 3A  : ");
     scanf("%d",&s);
     if (s==1)
     {  N:
	printf("\nselect one element :");
	printf("\t1. H \t2. Li \t3. Na \t4. K \t5. Rb \t6. Cs \t7. Fr \n");
	scanf("%d",&a);
	if(a>7)
	{ printf("Invalid Input\n");
		goto N;}
        WET:	
	printf("select one element :");
	printf("\t1. F \t2. cl \t3. Br \t4. I \t5. At \t6. Ts \n");
        scanf("%d",&b);
	if (b>6)
        { printf("Invalid Input\n");
          goto WET;}		
        if(a==1)
	{	switch(b){
		case 1 :  
			  printf("compound exists : HF \n");
			  break;
	        case 2 :  
			  printf("compound exists : HCl\n");
			  break;
	        case 3 :  
			  printf("compound exists : HBr\n");
			  break;
	        case 4 :  
			  printf("compound exists : HI\n");
			  break;
	        case 5 :  
			  printf("compound exists : HAt\n");
			  break;
                case 6 :  
			  printf("compound doesn't exist \n");
       			  break;
	        default : 
			  printf("Invalid input");
                          break;
       }		}	
	
	if(a==2)
	{       switch(b){
                case 1 : 
		         printf("compound exists : LiF\n ");
                         break;
	        case 2 :  
			 printf("compound exists : LiCl\n");
		         break;
		case 3 :
		         printf("compound exists : LiBr\n");
			 break;
	        case 4 :  
                         printf("compound exists : LiI\n");
			 break;
               case 5 :  
	                 printf("compound exists : LiAt\n");
			 break;
	       case 6 :  
			 printf("compound doesn't exist\n ");
			 break;
               default : 
			 printf("Invalid input");
                         break;	   
      }}

	if(a==3)
	{     switch(b){
                case 1 :  
			printf("compound exists : NaF\n ");
			break;
	        case 2 :  
		        printf("compound exists : NaCl\n");
		        break;
		case 3 :  
		        printf("compound exists : NaBr\n");
		        break;
	       case 4 : 
	                printf("compound exists : NaI\n");
	                break;
	       case 5 : 
	                printf("compound exists : NaAt\n");
			break;
	       case 6 : 
	                printf("compound doesn't exist\n ");
	                break;
               default : 
			printf("Invalid input");
                        break;			  
	}}
       if(a==4)
       {     switch(b){
                case 1 : 
                        printf("compound exists : KF \n");
			    break;
	         case 2 : 
	                 printf("compound exists : KCl\n");
		            break;
		 case 3 :  
		         printf("compound exists : KBr\n");
			    break;
	         case 4 :  
	                 printf("compound exists : KI\n");
			    break;
	         case 5 :  
	                 printf("compound exists : KAt\n");
			    break;
	         case 6 :  
	                  printf("compound doesn't exist\n ");
			    break;
	         default : 
			  printf("Invalid input");
			    break;
       }}
       if(a==5)
       {      switch(b){
	                case 1 :  printf("compound exists : RbF\n ");
				   break;
			 case 2 :  printf("compound exists : RbCl\n");
				   break;
		         case 3 :  printf("compound exists : RbBr\n");
				   break;
	                case 4 :  printf("compound exists : RbI\n");
				   break;
                        case 5 :  printf("compound doesn't exist\n");
			           break;
                        case 6 :  printf("compound doesn't exist \n");
	                           break;
	                default : printf("Invalid input");
                                   break;			
       }}
     if(a==6)
      {    switch(b){
	                 case 1 : printf("compound exists : CsF\n ");
				   break;
	                 case 2 : printf("compound exists : CsCl\n");
				   break;
	                 case 3 : printf("compound exists : CsBr\n");
				   break;
                         case 4 : printf("compound exists : CsI\n");
			           break;
                         case 5 : printf("compound exists : CsAt\n");
				   break;
			 case 6 : printf("compound doesn't exist \n");
				   break;
                         default : printf("Invalid input");
                                   break;	   
       }}
      if(a==7)
      {   switch(b){
                case 1 : printf("compound doesn't exist \n");
			  break;
	        case 2 : printf("compound doesn't exist \n");
		         break;
		case 3 : printf("compound doesn't exist\n");
			 break;
	        case 4 : printf("compound doesn't exist\n");
	                 break;
	        case 5 : printf("compound doesn't exist\n");
			 break;
		case 6 : printf("compound doesn't exist\n ");
			 break;
                default : printf("Invalid input");
                         break;		   }      
    }}                                          
 
   if(s==2)
    {     E:
	   printf("select one element");
          printf(" \t1. Be \t2. Mg \t3. Ca \t4. Sr \t5. Ba \t6. Ra\n");
          scanf("%d",&a);
	  if(a>6)
	  {  printf("Invalid Input\n");
		 goto E;}
          WEY: 
          printf("select one element :");
          printf("\t1. O \t2. S \t3. Se \t4. Te \t5. Po \t6. Lv \n");
          scanf("%d",&b);
	  if(b>6)
	  { printf("Invalid Input\n");
		  goto WEY;}
          if(a==1)
          {  switch(b){
	         case 1 :  printf("compound exists : BeO\n"); 
                             break;
                 case 2 :  printf("compound exists : BeS\n");
                             break;
                 case 3 :  printf("compound exists : BeSe\n");
                             break;			    
                 case 4 :  printf("compound exists : BeTe\n");
			     break;
		 case 5 :  printf("compound exists : BePo\n");
	                     break;
	         case 6 :  printf("compound doesn't exist\n");
	                     break;
	         default : printf("Invalid input");
                             break;		   
		      }}
	  if(a==2)
	  {  switch(b){
		        case 1 :  printf("compound exists : MgO\n");
				  break;
		        case 2 :  printf("compound exists : MgS\n");
	                          break;
	                case 3 :  printf("compound exists : MgSe\n");
		                  break;
	                case 4 :  printf("compound exists : MgTe\n");
		                  break;
			case 5 :  printf("compound exists : MgPo\n");
	                          break;
			case 6 :  printf("compound doesn't exist\n");
		                  break;
		        default : printf("Invalid input");
			          break;
	            }}
        if(a==3)
	  {  switch(b){
	                   case 1 :   printf("compound exists : CaO\n");
		                     break;
		           case 2 :  printf("compound exists : CaS\n");
		                     break;
		           case 3 :  printf("compound exists : CaSe\n");
		                     break;
		           case 4 :  printf("compound exists : CaTe\n");
		                     break;
		           case 5 :  printf("compound exists : CaPo\n");
	                             break;
	                   case 6 :  printf("compound doesn't exist\n");
                                     break;
			   default : printf("Invalid input");
				     break;
                      }}
        if(a==4)
	{  switch(b){
		      case 1 :  printf("compound exists : SrO\n");
		                break;
		      case 2 :  printf("compound exists : SrS\n");
	                        break;
		      case 3 :  printf("compound exists : SrSe\n");
	                        break;
		      case 4 :  printf("compound exists : SrTe\n");
	                        break;
		      case 5 :  printf("compound doesn't exist\n");
                               break;
                      case 6 :  printf("compound doesn't exist\n");
                                break;
		      default : printf("Invalid input");
	                        break;
							                      }}
       if(a==5)
       {  switch(b){
	              case 1 :  printf("compound exists : BaO\n");
		                 break;
		      case 2 :  printf("compound exists : BaS\n");
		                 break;
		      case 3 :  printf("compound exists : BaSe\n");
		                 break;
		      case 4 :  printf("compound exists : BaTe\n");
		                 break;
		      case 5 :  printf("compound exists : BaPo\n");
	                         break;
	              case 6 :  printf("compound doesn't exist\n");
                                 break;
		      default : printf("Invalid input");
			         break;
                      }}				   
       if(a==6)
       {  switch(b){
		        case 1 :  printf("compound exists : Rh2O3\n");
		                  break;
		        case 2 :  printf("compound exists : Rh2S3\n");
		                  break;
	                case 3 :  printf("compound doesn't exist \n");
				   break;
		        case 4 :  printf("compound exists : RhTe2\n");
				   break;
			case 5 :  printf("compound doesn't exist\n");
	                          break;
	                case 6 :  printf("compound doesn't exist\n");
		                  break;
		        default : printf("Invalid input");
			          break;
}}
       }       

      if(s==3)	      
{       W: 
	printf("select one element");
	 printf(" \t1. B \t2. Al \t3. Ga \t4. In \t5. Tl \t6. Nh\n");
         scanf("%d",&a);
	 if(a>6)
	 { printf("Invalid Input\n");
		 goto W;}
         WEU:
         printf("select one element :");
         printf("\t1. N \t2. P \t3. As \t4. Sb \t5. Bi \t6. Mc \n");
	 scanf("%d",&b);
	 if(b>6)
	 { printf("Invalid Input\n");
		 goto WEU;}
	if(a==1){
	  switch(b){
	         case 1 : printf("compound exists : BN\n");
			                break;
		 case 2 : printf("compound exists : BP\n");
		                        break;
		 case 3 : printf("compound exists : BAs\n");
		                        break;
		 case 4 : printf("compound exists : BSb\n");
		                        break;
		 case 5 : printf("compound exists : BBi\n");
		                        break;
		 case 6 : printf("compound doesn't exist\n ");
		                        break;
		 default : printf("Invalid input");
		                        break;	   
	}}

        if(a==2){
		switch(b){
			case 1 : printf("compound exists : AlN\n");
				                         break;
		         case 2 : printf("compound exists : AlP\n");
				                         break;
			 case 3 : printf("compound exists : AlAs\n");
			                                 break;
			 case 4 : printf("compound exists : AlSb\n");
			                                 break;
			 case 5 : printf("compound exists : AlBi\n");
			                                 break;
			 case 6 : printf("compound doesn't exist\n");
			                                 break;
			 default : printf("Invalid input");
			                                 break;	   
       }}
	if(a==3){
		  switch(b){
			  case 1 : printf("compound exists : GaN\n");
				                           break;
			  case 2 : printf("compound exists : GaP\n");
			                                   break;
			  case 3 : printf("compound exists : GaAs\n");
			                                   break;
			  case 4 : printf("compound exists : GaSb\n");
			                                   break;
			  case 5 : printf("compound exists : BiGa\n");
			                                   break;
			  case 6 : printf("compound doesn't exist\n");
			                                   break;
                          default : printf("Invalid input");
					                   break;
		  }}
        if(a==4){
	         switch(b){
		         case 1 : printf("compound exists : InN\n");
			                                  break;
			 case 2 : printf("compound exists : InP\n");
			                                  break;
			 case 3 : printf("compound exists : InAs\n");
			                                  break;
			 case 4 : printf("compound exists : InSb\n");
			                                  break;
			 case 5 : printf("compound exists : BiIn\n");
			                                  break;
			 case 6 : printf("compound doesn't exist\n");
			                                  break;
		         default : printf("Invalid input");
					                  break;
		 }}
         if(a==5){
	          switch(b){
		         case 1 : printf("compound exists : Tl3N\n");
			                                  break;
			 case 2 : printf("compound exists : TlP\n");
			                                  break;
			 case 3 : printf("compound exists : AsTl\n");
			                                  break;
			 case 4 : printf("compound exists : TlSb\n");
			                                  break;
			 case 5 : printf("compound exists : BiTl\n");
			                                  break;
			 case 6 : printf("compound doesn't exist\n");
			                                  break;
		         default : printf("Invalid input");
					                  break;
		  }}
         if(a==6){
	            switch(b){
		        case 1 : printf("compound doesn't exist\n");
		                                  break;
			case 2 : printf("compound doesn't exist\n");
		                                  break;
			case 3 : printf("compound doesn't exist\n");
		                                  break;
			case 4 : printf("compound doesn't exist\n");
		                                  break;
			case 5 : printf("compound doesn't exist\n");
		                                  break;
			case 6 : printf("compound doesn't exist\n");
		                                  break;
	                default : printf("Invalid input");
	                                          break;			  
		    }}
} if(s>3)
   { printf("\nInvalid Input\n");
     goto WER;              }
}
void exam(struct logreg *w){
int countr=0;
getchar();
printf("\n\n\t\t Hello,%s lets start the exam :\n\n\n",w->name);
printf("\n\n\t\t*****************************************INSTRUCTION FOR EXAM **************************************************\t\t");
printf("\n\t\t * There are 15 questions in test \n");
printf("\n\t\t * Each question got one mark\n");
printf("\n\t\t * Press Enter to go to next question \n");
printf("\n\t\t * After each question the correct answer to the question is provided \n");
printf("\n\t\t * If the score in test is greater than your previous test the your highest score will be changed in profile\n");
printf("\n\n\t\t\t   Press Enter to Start exam \n");
for(int i=1;i<16;i++){
        getchar();
        switch(i)
		{
		case 1:
		system("cls");
		printf("\n\n\n What element has an atomic number of 1 ?");
		printf("\n\nA.Helium\t\tB.Oxygen\n\nC.Hydrogen\t\tD.Gold\n\n");
		printf("\n\n\n\n\t\t");
		if (toupper(getchar())=='C')
			{
			printf("\n\n\n\nCorrect!!!");
			countr++;getchar();
			 break;}
		else
		       {
		       printf("\n\nWrong!!! The correct answer is C.Hydrogen");getchar();
		       break;
		    }

		case 2:
		system("cls");
		printf("\n\n\nWhat is the name of the family of elementrs that has a full outer shell of electrons ?");
		printf("\n\nA.Noble gases\t\tB.Alkali metals\n\nC.Actinides\t\tD. Halogens");
		printf("\n\n\n\n\t\t");
		if (toupper(getchar())=='A')
			{
			printf("\n\nCorrect!!!");countr++;getchar();
			 break;}
		else
		       {
		       printf("\n\nWrong!!! The correct answer is A.Noble gases");getchar();
		       break;
		       }

        case 3:
               system("cls");
		printf("\n\n\n Abbrevation of  Element Gold ");
		printf("\n\nA.G\t\tB.Go\n\nC.Au\t\tD.A");
		printf("\n\n\n\n\t\t");
		if (toupper(getchar())=='C')
			{
			printf("\n\nCorrect!!!");countr++;getchar();
			 break;}
		else
		       {
		       printf("\n\nWrong!!! The correct answer is C.Au");getchar();
		       break;}

        case 4:
               system("cls");
		printf("\n\n\nWhich of these does not reflect the periodicity of the Elements?");
		printf("\n\nA.Neutron/proton ratio\t\tB.Bonding Behaviour\n\nC.Electronegativity\t\tD.Ionization Energy");
		printf("\n\n\n\n\t\t");
		if (toupper(getchar())=='A')
			{printf("\n\n\n\n\t\t");
			printf("\n\nCorrect!!!");countr++;getchar();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is A.Neutron/proton ratio");getchar();
		       break;
		       }

        case 5:
		system("cls");
		printf("\n\n\nThe tenth elements in the periodic table resembles with the ?");
		printf("\n\nA.First Period\t\tB.Second Period\n\nC.Fourth group\t\tD.Ninth group");
		printf("\n\n\n\n\t\t");
		if (toupper(getchar())=='B')
			{printf("\n\nCorrect!!!");countr++;getchar(); break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is B.Second Period");	    
		         getchar();
	                 break;
	                 }

	case 6:
		system("cls");
		printf("\n\n\n An Element of atomic number 29 belongs to ?");
		printf("\n\nA.s-block\t\tB.p-block\n\nC.d-block\t\tD.f-block");
		printf("\n\n\n\n\t\t");
		if (toupper(getchar())=='C' )
			{printf("\n\nCorrect!!!");countr++;getchar();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.d-block");
		       getchar();
		       break;}

        case 7:
		system("cls");
		printf("\n\n\nDiagonal relationship is shown by ?");
		printf("\n\nA.Elements of first period\t\tB.Elements of second period\n\nC.Elements of third period\t\tD. B and C both");
		printf("\n\n\n\n\t\t");
		if (toupper(getchar())=='D')
			{printf("\n\nCorrect!!!");countr++;getchar();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D. B and C both");getchar();
		       break;}

        case 8:
		system("cls");
		printf("\n\n\nWhich group of periodic table contains only metals?");
		printf("\n\nA.IIA\t\tB.IB\n\nC.IA\t\tD.None of the above");
		printf("\n\n\n\n\t\t");
		if (toupper(getchar())=='B')
			{printf("\n\nCorrect!!!");countr++;getchar(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B. IB");getchar();
	//      goto score;
		       break;}

        case 9:
		system("cls");
		printf("\n\n\nAluminium is diagonally related to (in periodic table)?");
		printf("\n\nA.Be\t\tB.B\n\nC.C\t\tD.Li");
		printf("\n\n\n\n\t\t");
		if (toupper(getchar())=='A')
			{printf("\n\nCorrect!!!");countr++; getchar();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Be");getchar();
		       break;}

        case 10:
		system("cls");
		printf("\n\n\nAlkali metals in each period have ?");
		printf("\n\nA.Lowest Ionization potential\t\tB.Highest ionization potential\n\nC.smallest size\t\tD.Highest Electronegativity ");
		printf("\n\n\n\n\t\t");
		if (toupper(getchar())=='A')
			{printf("\n\nCorrect!!!");countr++;getchar(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Lowest Ionization Potential");getchar();
		       break;
		}

        case 11:
		system("cls");
		printf("\n\n\nChemical behaviour of atom is determined by?");
		printf("\n\nA.Mass Number\t\tB.Binding Energy\n\nC.Atomic Number\t\tD.Number of isotopes");
		printf("\n\n\n\n\t\t");
		if (toupper(getchar())=='C')
			{printf("\n\nCorrect!!!");countr++;getchar();
			 break;}
		else
              {printf("\n\nWrong!!! The correct answer is C.Atomic Number");getchar();
              break;
           }

        case 12:
		system("cls");
		printf("\n\n\nWhich of the following is a inert element?");
		printf("\n\nA.He\t\tB.Li\n\nC.H\t\tD.Na");
		printf("\n\n\n\n\t\t");
		if (toupper(getchar())=='A')
			  {printf("\n\nCorrect!!!");countr++;
			  getchar();
			   break;}
		else
                      { printf("\n\nWrong!!! The correct answer is A.He");
                        getchar();
                        break;
                      }

	case 13:
		system("cls");
		printf("\n\n\nChoose the typical element?");
		printf("\n\nA.K\t\tB.Sc\n\nC.Au\t\tD.Na");
		printf("\n\n\n\n\t\t");
		if (toupper(getchar())=='D')
			{printf("\n\nCorrect!!!");countr++;getchar();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Na");getchar();
		       break;
		       }

        case 14:
		system("cls");
		printf("\n\n\nHighest density is of ?");
		printf("\n\nA.Os\t\tB.Ir\n\nC.Pb\t\tD.Hg");
		printf("\n\n\n\n\t\t");
		if (toupper(getchar())=='A')
		     { printf("\n\nCorrect!!!");countr++;
		       getchar();
		       break;}
		else
 		     { printf("\n\nWrong!!! The correct answer is A.Os");getchar();
      		       break;
		     }

	case 15:
		system("cls");
		printf("\n\n\nWhich is metalloid ?");
		printf("\n\nA.Pb\t\tB.Sb\n\nC.Bi\t\tD.Mg");
		printf("\n\n\n\n\t\t");
		if (toupper(getchar()=='B'))
		     { printf("\n\nCorrect!!!");countr++;
		       getchar();
		       break;
		     }
		else
		     { printf("\n\nWrong!!! The correct answer is B.Sb");
		       getchar();
	               break;}
                     }
                       
                   }
        
system("cls");
printf("\n\n\n\t Your correct answers are %d out of 15 questions \n",countr);
if(countr> w->highestscore)
          w->highestscore =countr;
return;
}
void results(struct logreg* m,int i){
     printf(" \n\n \t\t Name             : %s\n\n ",m->name);
     printf(" \t\t Highest score secured on  Today   : %d \n\n",m->highestscore);
     double f;
     f=((float)(m->highestscore)/15)*100;
     printf(" \t\t Percentage secured    : %lf %%\n\n",f);
				      }	 
          
int main(){
mainscreen1();
return 0;}
