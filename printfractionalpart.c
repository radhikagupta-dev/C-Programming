#include<stdio.h>
int main(){
    float x;
    printf("Enter a real number: ");
    scanf("%f",&x);
    int y;
    y=x;
    float z=x-y;
    printf("Fractional part of the real number is %f",z);
    return 0;
}