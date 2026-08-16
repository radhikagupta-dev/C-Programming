#include<stdio.h>
int main(){
    int x;
    printf("Enter the number of row:");
    scanf("%d",&x);
    int a=1;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=x-i;j++){
            printf(" ");

        }
        int d=64+a;
        int ch=(char)d;
        for(int k=1;k<=2*i-1;k++){
            printf("%c",ch);
            ch++;
        }
        printf("\n");
    }

    return 0;
}