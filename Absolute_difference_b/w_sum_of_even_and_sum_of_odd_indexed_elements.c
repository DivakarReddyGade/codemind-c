#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[n],i,d,s1=0,s2=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            s1=s1+a[i];
        }
        else if(i%2!=0)
        {
            s2=s2+a[i];
        }
        d=abs(s2-s1);
    }
    printf("%d",d);
}