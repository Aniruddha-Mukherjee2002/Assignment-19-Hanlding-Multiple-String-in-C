#include<stdio.h>
#include<string.h>
void TakeInput(char s[][50])
{
    printf("Enter name of 3 IP addresses : ");
    for(int i = 0;i<3;i++)
    {
        fflush(stdin);
        fgets(s[i],50,stdin);
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
void isValidIp(char s[][50])
{
    int flag = 0, j =0,isdot = 0,temp = 3;
    for(int i = 0;i<3;i++)
    {
        j = 0, flag = 0,isdot = 0;
        while(s[i][j]!='\n')
        {
           if(j!=strlen(s[i])-1){
            if(temp==i&&s[i][j]=='.')
            {
                isdot++;
                temp+=4;
            }
           }
            if(s[i][j]>='0'&&s[i][j]<='5')
            {
                flag++;

            }

            j++;
        }
        if(flag!=11 && isdot<3)
        {
            printf("%s is invalid IP address.\n",s[i]);
        }
    }
}
int main()
{
    char s[3][50];
    TakeInput(s);
    isValidIp(s);
}
