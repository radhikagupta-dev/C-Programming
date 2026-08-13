// #include<stdio.h>
// int main(){
//     float p,r,t,si;
//     p= 100;
//     r= 10;
//     t=2;
//     si=(p*r*t)/100;
//     printf("%f",si );
//     return 0;
// }

//Taking input
#include<stdio.h>
int main(){
    float principal,rate,time,si;
    printf("Enter Principal value:");
    scanf("%f", &principal);
    printf("Enter rate: ");
    scanf("%f",&rate);
    printf("Enter time period; ");
    scanf("%f",&time);
    si=(principal*rate*time)/100;
    printf("Simple interest: %f",si);
    return 0;
}