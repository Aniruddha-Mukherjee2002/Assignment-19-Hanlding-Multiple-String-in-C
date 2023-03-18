//Create an authentication system. It should be menu driven.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_YELLOW "\x1b[33m"
#define ANSI_COLOR_BLUE "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN "\x1b[36m"
#define ANSI_COLOR_RESET "\x1b[0m"
int authentic(char str1[30],char str2[10]){

char str3[30];
char str4[10];
int i,j,k,n,size,x;
printf(ANSI_COLOR_YELLOW "Enter username : " ANSI_COLOR_RESET);
fflush(stdin);
fgets(str1,30,stdin);
printf(ANSI_COLOR_GREEN "\nUsername saved.\n"ANSI_COLOR_RESET);
printf(ANSI_COLOR_YELLOW"\nEnter password ( password should be in 10 characters ) : "ANSI_COLOR_RESET);
fflush(stdin);
fgets(str2,10,stdin);
for(x=0;x<10;x++)
{
    if(str2[x]==' ')
    {
        printf(ANSI_COLOR_RED"\nWrong choice!! Please enter password without space.\n"ANSI_COLOR_RESET);
        return 0;
    }
}
printf(ANSI_COLOR_GREEN"\nPassword saved\n"ANSI_COLOR_RESET);
printf(ANSI_COLOR_RED"\nLoading......"ANSI_COLOR_RESET);
system("cls");
printf(ANSI_COLOR_YELLOW"\n\nEnter username : "ANSI_COLOR_RESET);
fflush(stdin);
fgets(str3,30,stdin);
i=strcmp(str1,str3);
if(i==0)
printf(ANSI_COLOR_GREEN"\nUsername matched.\n"ANSI_COLOR_RESET);
else
{
    printf(ANSI_COLOR_RED"\n invalid username\n\n"ANSI_COLOR_RESET);
    return 0;;
}
printf(ANSI_COLOR_YELLOW"\nEnter password :"ANSI_COLOR_RESET);
fflush(stdin);
fgets(str4,10,stdin);
for(x=0;x<10;x++)
{
    if(str2[x]==' ')
    {
        printf(ANSI_COLOR_RED"\nWrong choice!! Please enter password without space.\n"ANSI_COLOR_RESET);
        return 0;
    }
}
j=strcmp(str2,str4);
if(j==0)
    printf(ANSI_COLOR_GREEN"\nSuccessfully entered\n"ANSI_COLOR_RESET);
    else
    {
        printf(ANSI_COLOR_RED"\n Wrong choice\n"ANSI_COLOR_RESET);
    }
printf(ANSI_COLOR_CYAN"\n     This is an basic authentication system. Developed by Aniruddha Mukherjee using C\n"ANSI_COLOR_RESET);
}
int authentic(char [],char []);
int main(){
char str5[30];
char str6[10];
system("cls");
while(1)
{
    printf(ANSI_COLOR_GREEN"\n1. PRESS [1] TO ADD USERNAME OR PASSWORD.\n"ANSI_COLOR_RESET);
    printf(ANSI_COLOR_GREEN"\n2. FOR EXIT PRESS [2] \n"ANSI_COLOR_RESET);
    int choice;
    scanf("%d",&choice);
    if(choice!=1&&choice!=2)
    {
        printf(ANSI_COLOR_RED"\n   WRONG CHOICE   \n"ANSI_COLOR_RESET);
        break;
    }
    else
    {
        switch(choice)
    {
        case 1:authentic(str5,str6);
                break;
        case 2:printf(ANSI_COLOR_RED"\nExited from program\n"ANSI_COLOR_RESET);
               exit(0);
               break;
        }
    }
}
return 0;
}
