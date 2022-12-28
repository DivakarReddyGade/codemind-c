#include<stdio.h>
int main()
{
    int x,n,m,i;
    scanf("%d",&x);
    for (i=1;i<=x;i++)
    {
        scanf("%d %d",&n,&m);
        printf("%d
",(5*n)+(7*m));
    }
}