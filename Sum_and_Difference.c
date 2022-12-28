#include<stdio.h>
int main()
{
    int a,b,c,x;
    float d,e,f,y;
    scanf("%d%d",&a,&b);
    scanf("%f%f",&d,&e);
    c=a+b;
    x=a-b;
    f=d+e;
    y=d-e;
    printf("%d %d
",c,x);
    printf("%0.1f %0.1f",f,y);
    
}