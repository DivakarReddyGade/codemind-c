#include<stdio.h>
int main()
{
    int s,h,m;
    scanf("%d",&s);
    h=s/365;
    m=(s%365)/7;
    printf("%d
%d",h,m);
}