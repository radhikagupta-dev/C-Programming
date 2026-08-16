#include<stdio.h>
int main(){
    int x;
    printf("Enter the number of rows:");
    scanf("%d",&x);
    int nst=x;
    int nsp=1;
    for(int i=1;i<=2*x-1;i++){
        printf("%d",i);
    }
    printf("\n");
    for(int i=1;i<=x;i++){
        int a=1;
        for(int j=1;j<=nst-1;j++){
            printf("%d",a);
            a++;
        }
        for(int k=1;k<=nsp;k++){
            printf(" ");
            a++;
        }
        for(int m=1;m<=nst-1;m++){
            printf("%d",a);
            a++;
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}


