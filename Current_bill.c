#include<stdio.h>
int main()
{
    float a,b,amt,tamt;
    scanf("%f",&a);
    if(a<=199)
    {
        b=a*1.20;
    }
    else if(a>=200 && a<400)
    {
        b=a*1.50;
    }
    else if(a>=400 && a<600)
    {
        b=a*1.80;
    }
    else if(a>=600)
    {
        b=a*2.00;
    }
    if(b>400)
    {
        amt=b+(b*0.15);
    }
    else if(b<400)
    {
        amt=b+100;
    }
    printf("%0.2f",amt);
}