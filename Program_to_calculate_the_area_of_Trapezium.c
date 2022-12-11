#include<stdio.h>
int main()
{
    int a,b,c;
    float area;
    scanf("%d%d%d",&a,&b,&c);
    area=0.5*(a+b)*c;
    printf("%.4f",area);
}