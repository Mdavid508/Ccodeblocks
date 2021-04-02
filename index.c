#include<stdio.h>
void main(){
    int a;
    int b;
    int c;
    printf("input the English marks:");
    scanf("%d",&a);
    printf("input the Kiswahili marks:");
    scanf("%d",&b);
    printf("input the Mathematics number:");
    scanf("%d",&c);
    int sum=a+b+c;
    int avg=(sum/7);
    if(avg>=30)
    {
       printf("Pass");
    }
    else
    {
     printf("Fail");
    }

}
