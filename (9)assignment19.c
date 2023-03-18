/*Write a program that asks the user to enter a username. If the username entered is
one of the names in the list then the user is allowed to calculate the factorial of a
number. Otherwise, an error message is displayed*/

#include<stdio.h>
#include<string.h>
void TakeInput(char s[][50])
{
    printf("Enter 3 usernames : ");
    for(int i = 0;i<3;i++)
    {
        fflush(stdin);
        gets(s[i]);
    }
}
void display(char s[][50])
{
    int j  = 0;
    for(int i = 0;i<3;i++)
    {
       j = 0;
       while(s[i][j]!='\n')
        {
          printf("%c",s[i][j]);
          j++;
        }
        printf("\n");
    }
}
void givePermission(char s[][50])
{
    char ch[50];
    printf("Please Enter a Username : ");
    gets(ch);
    for(int i = 0;i<6;i++)
    {
        if(strcmp(s[i],ch)==0)
        {
            int fact = 1;
            int n;
            printf("\nCongratulations! Correct username.\n\n");
            printf("Enter a number you want to calculate factorial : ");
            scanf("%d",&n);
            for(int j = 1;j<=n;j++)
            {
                fact*=j;
            }
            printf("Factorial of %d is : %d",n,fact);
            return;
        }
    }
    printf("Invalid Username.");
}
int main()
{
    char s[3][50];
    TakeInput(s);
    givePermission(s);
    return 0;
}
