#include<stdio.h>
void main(){
    float a,b,total;
    printf("Enter the first number : ");
    scanf("%f",&a);
    printf("Enter the second number : ");
    scanf("%f",&b);
    total=a+b;
    printf("The total  of %.2f and %.2f = %.2f",a,b,total);
}