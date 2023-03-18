#include<stdio.h>
#include<string.h>
void TakeInput(char s[][50])
{
    printf("Enter 6 strings : ");
    for(int i = 0;i<6;i++)
    {
        fflush(stdin);
        gets(s[i]);
    }
}
void display(char s[][50])
{
    int j  = 0;
    for(int i = 0;i<6;i++)
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
void checkDistance(char s[][50])
{
    char c1[50];
    char c2[50];
    printf("Enter Staring String : ");
    fflush(stdin);
    gets(c1);
    printf("Enter ending String : ");
    fflush(stdin);
    gets(c2);
    int i = 0;
    while(1)
    {
        if(strcmp(c1,s[i])==0)
        {
           break;
        }
        i++;
    }
    int count = 0;
   while(1)
    {
        if(strcmp(s[i],c2)==0)
        {
            printf("Minimum distance between %s and %s is : %d",c1,c2,count-1);
            break;
        }
        count++;
        i++;
    }
}
int main()
{
    char s[6][50];
    TakeInput(s);
    checkDistance(s);
    return 0;
}
