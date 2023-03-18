/*Write a program to print the strings which are palindrome in the list of strings.*/
#include<stdio.h>
#include<string.h>
void TakeInput(char s[][50])
{
    printf("Enter name of 3 Strings : ");
    for(int i = 0;i<3;i++)
    {
        fflush(stdin);
        gets(s[i]);
    }
}
void ispalindrome(char s[][50])
{
    char temp[50];
    printf("\nPalindrome Strings are or is : \n");
    for(int i = 0;i<3;i++)
    {
        strcpy(temp,s[i]);
        strrev(s[i]);
        if(strcmp(temp,s[i])==0)
        printf("%s\n",s[i]);
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
int main()
{
    char s[3][50];
    TakeInput(s);
    ispalindrome(s);
    //display(s);
    return 0;
}
