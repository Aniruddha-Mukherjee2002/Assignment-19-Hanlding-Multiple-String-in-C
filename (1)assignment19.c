/*Write a program to find the number of vowels in each of the 5 strings stored in two
dimensional arrays, taken from the user.*/

#include<stdio.h>
#include<string.h>
void TakeInput(char s[][10])
{
    for(int i = 0;i<5;i++)
    {
        fflush(stdin);
        fgets(s[i],10,stdin);
    }
}
void findVowel(char s[][10])
{
    int count = 0;
    int j = 0;
    for(int i = 0;i<5;i++)
    {
       j = 0;
       while(s[i][j]!='\n')
        {
            if(s[i][j]=='a' ||s[i][j]=='e' ||s[i][j]=='i'||s[i][j]=='o'||s[i][j]=='u')
                count++;

                printf("%c",s[i][j]);
                j++;
        }
        printf(" -> has %d vowel(s)\n",count);
        count = 0;
    }
}
void display(char s[][5])
{
    int j  = 0;
    for(int i = 0;i<5;i++)
    {
       j = 0;
       while(s[i][j]!='\n')
        {
          printf("%c",s[i][j]);
        }
    }
}
int main()
{
    char s[5][10];
    TakeInput(s);
    findVowel(s);
    return 0;
}
