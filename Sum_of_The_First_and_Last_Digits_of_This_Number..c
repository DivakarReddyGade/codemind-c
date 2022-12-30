#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int l,a,r,f;
        scanf("%d",&a);
        l=log10(a)+1;
        r=a%10;
        f=a/(pow(10,l-1));
        printf("%d
",r+f);
    }
    
}