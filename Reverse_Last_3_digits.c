#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int r,rev=0,temp,rem;
    r=a%1000;
    temp=r;
    while(temp)
    {
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
    printf("%d",a/1000);
    printf("%d",rev);
}
