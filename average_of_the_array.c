#include<stdio.h>
int main()
{
    int n,i;
    float a[n],avg,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    printf("%.2f",s/n);
}