#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int j=0;j<t;j++)
    {
       char s[100];
       scanf("%s",s);
       int c=0,i,l=strlen(s);
       for(i=0;i<l;i++)
       {
           if(isdigit(s[i]))
           {
               c++;
           }
       }
       if(c==l)
       {
           printf("True
");
       }
       else
       {
           printf("False
");
       }
    }
}