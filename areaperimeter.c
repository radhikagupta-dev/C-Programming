#include<stdio.h>
int main(){
    float l,b,a,p;
    printf("Enter length:");
    scanf("%f", &l);
    printf("Enter breadth:");
    scanf("%f", &b);
    a=l*b;
    p=2*(l+b);
    printf("Area is %f",a);
    printf("\nPerimeter is %f",p);
    if(a>p){
        printf("\nArea is greater");
    }
    else{
        printf("\nPerimeter is greater");
    }
    return 0;
}