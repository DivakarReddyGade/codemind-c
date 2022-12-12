#include<stdio.h>
int main()
{
    int a[3],i,c,p=1,cap;
    for(i=0;i<=3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        p=p*a[i];
    }
    c=p*2*512;
    cap=c/1024;
    printf("%dKB",cap);
}