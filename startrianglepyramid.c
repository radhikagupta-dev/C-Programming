#include<stdio.h>
int main(){
    int x;
    printf("Enter the number of rows:");
    scanf("%d",&x);
    int nsp=1;
    int nst=x;
    for(int i=1;i<=2*x+1;i++){
        printf("*");
    }
    printf("\n");
    for(int i=1;i<=x;i++){
        for(int j=1;j<=nst;j++){
            printf("*");
        }
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        
        nsp+=2;
        for(int m=1;m<=nst;m++){
            printf("*");
        }
        nst--;
        printf("\n");
    }
    return 0;
}