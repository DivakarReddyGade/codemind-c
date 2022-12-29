#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a,b,c,d;
        scanf("%d%d",&a,&b);
        c=a*2;
        d=b*5;
        if(c>d)
        {
            printf("Chocolate
");
        }
        else if(c<d)
        {
            printf("Candy
");
        }
        else if(c==d)
        {
            printf("Either
");
        }
    }
}