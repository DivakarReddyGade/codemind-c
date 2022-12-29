#include<stdio.h>
int main()
{
    int n,i,m=3,a=-2;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d ",m);
            m=m*3-4;
        }
        else
        {
            printf("%d ",a);
            a=a*5+12;
        }
    }
}