#include<stdio.h>
int main(){
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if (x%3==0 || x%5==0 && x%15!=0){
        printf("Number is divisible by 3 or 5 but not by 15");
        }
    else{
        printf("Number is not divisible by 3 or 5");
    }
    return 0;
}