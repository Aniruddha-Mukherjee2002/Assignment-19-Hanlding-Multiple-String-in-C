/*Write a program to read and display a 2D array of strings in C language.*/

#include<stdio.h>
#include<string.h>
void TakeInput(char s[][10])
{
    printf("Enter name of 3 Strings : ");
    for(int i = 0;i<3;i++)
    {
        fflush(stdin);
        fgets(s[i],10,stdin);
    }
}
void display(char s[][10])
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
    char s[3][10];
    TakeInput(s);
    printf("\n");
    display(s);
    return 0;
}
