#include<stdio.h>
int main(){
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    for(int i=1;i<=(2*x-1);i=i+2){
        printf("%d \n",i);
    }
        return 0;
}








