#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,s=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(sqrt(a[i])==floor(sqrt(a[i])))
        {
            s=s+a[i];
        }
    }
    printf("%d",s);
}