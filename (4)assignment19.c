/*Write a program to search a string in the list of strings.*/

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
int searchByName(char s[][10])
{
    int flag = 0;
    char temp[10];
    printf("Enter a string to search , please enter the string within 10 characters and without space  : \n");
    fflush(stdin);
    fgets(temp,10,stdin);
    for(int i = 0;i<3;i++)
    {
        if(strcmp(s[i],temp)==0)
        {
            flag = 1;
            return flag;
        }
    }
    return flag;
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
    if(searchByName(s))
    {
        printf("String Found.");
    }
    else
    {
        printf("String Not Found.");
    }
    return 0;
}
