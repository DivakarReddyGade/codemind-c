#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int i;
    for(i=0;i<t;i++)
    {
        int n;
        scanf("%d",&n);
        int a[n],b[n],i,j,t;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            b[i]=a[i];
        }
        for(i=1;i<n;i++)
        {
            for(j=0;j<n-1;j++)
            {
                if(b[j]>b[j+1])
                {
                    t=b[j];
                    b[j]=b[j+1];
                    b[j+1]=t;
                }
            }
        }
        int c=0;
        for(i=0;i<n;i++)
        {
            if(a[i]==b[i])
            {
                c+=1;
            }
        }
        if(c==n)
        {
            printf("0");
        }
        else
        {
            printf("%d",b[n-1]-b[0]);
        }
        printf("
");
    }
}