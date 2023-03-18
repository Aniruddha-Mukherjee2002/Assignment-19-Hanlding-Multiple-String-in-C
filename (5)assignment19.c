/*Suppose we have a list of email addresses, check whether all email addresses have
‘@’ in it. Print the odd email out.*/
#include<stdio.h>
#include<string.h>
void TakeInput(char s[][50])
{
    printf("Enter name of 3 emails : ");
    for(int i = 0;i<3;i++)
    {
        fflush(stdin);
        fgets(s[i],50,stdin);
    }
}
void iscorrect_mail(char s[][50])
{
    int flag = 0, j = 0;
    for(int i = 0;i<3;i++)
    {
        flag =0;
        j = 0;
        while(s[i][j]!='\n')
        {
            if(s[i][j]=='@')
                flag = 1;
                j++;
        }
        if(flag == 0)
            printf("\n%s -> this email not containing @ ",s[i]);
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
    iscorrect_mail(s);
    //display(s);
    return 0;
}
