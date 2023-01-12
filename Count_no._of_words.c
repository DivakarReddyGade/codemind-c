#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s[100];
    scanf("%[^
]s",s);
    int l=strlen(s),i,c=1;
    for(i=0;i<l;i++)
    {
        if(s[i]==' ' && isalpha(s[i+1]) && (i>0)) 
        {
            c++;
        }
    }
    printf("%d",c);
}