#include<stdio.h>
#include<math.h>
int main()
{
	int n,a,b,i,k1=-1,k2=1;
	scanf("%d",&n);
	for(i=1;i<=n+1;i++)
	{
		if(i%2==0)
		{
			a=pow(3,k1);
			printf("%d ",a);
			k1++;
		}
		else
		{
			b=pow(2,k2);
			printf("%d ",b);
			k2++;
		}
	}
}