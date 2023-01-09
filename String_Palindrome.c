#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int i,c=0,l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]!=s[l-i-1])
        {
            c=1;
            break;
        }
    }
    if(c==1)
    {
        printf("Not Palindrome");
    }
    else
    {
        printf("Palindrome");
    }
}