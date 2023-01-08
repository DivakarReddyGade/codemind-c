#include<stdio.h>
int main(){
    float a,amt,amt1;
    scanf("%f",&a);
    if(a<=199){
        amt=a*1.20;
    }
    else if(200<=a&&a<400){
        amt=a*1.50;
    }
    else if(400<=a&&a<600){
        amt=a*1.80;
    }
    else if(a>=600){
        amt=a*2.00;
    }
    if(amt>400){
        amt1=amt+(amt*0.15);
        printf("%.2f",amt1);
    }
    else{
        amt1=amt+100;
        printf("%.2f",amt1);
    }
    
}