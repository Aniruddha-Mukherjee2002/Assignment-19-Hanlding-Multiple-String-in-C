/*Write a program to sort 10 city names stored in two dimensional arrays, taken from
the user.*/
#include<stdio.h>
#include<string.h>
void TakeInput(char s[][10])
{
    printf("Enter name of 3 cities : ");
    for(int i = 0;i<3;i++)
    {
        fflush(stdin);
        fgets(s[i],10,stdin);
    }
}
void sortByName(char s[][10])
{
    char temp[10];
    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<3-i-1;j++)
        {
            if(strcmp(s[j],s[j+1])>0)
            {
                strcpy(temp,s[j]);
                strcpy(s[j],s[j+1]);
                strcpy(s[j+1],temp);
            }
        }
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
    sortByName(s);
    printf("After Sorting By Names of cities : \n");
    display(s);
    return 0;
}
