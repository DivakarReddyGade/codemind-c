#include<stdio.h>
int main()
{
    int a,r,s=0,p=1;
    scanf("%d",&a);
    while(a!=0)
    {
        r=a%10;
        a=a/10;
        p=p*r;
        s=s+r;
    }
    if(s==p)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}