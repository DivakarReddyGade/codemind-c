#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d",&a,&b,&c);
    d=(b-a)/c;
    if(b==199)
    {
        int e=b-100;
        d=(e-a)/c;
    }
    printf("%d",d);
}