#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n,s,f=0;
        scanf("%d%d",&n,&s);
        int a[n];
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        for(int j=n;j>=1;j--)
        {
            for(int k=0;k<=n-j;k++)
            {
                int s1=0;
                for(int l=k;l<k+j;l++)
                {
                    s1+=a[l];
                }
                if(s1==s)
                {
                    printf("%d %d
",k+1,k+j);
                    f=1;
                    break;
                }
            }
            if(f==1)
            {
                break;
            }
        }
        if(f==0)
        {
            printf("-1
");
        }
    }
}