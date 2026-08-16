#include<stdio.h>
int main(){
    int x;
    printf("Enter the number of rows:");
    scanf("%d",&x);
     for(int i=1;i<=x;i++){
        int b=1;
        for(int j=1;j<=x-i;j++){
            printf(" ");
        }
        int c=1;
        int e=64+c;
        int th=(char)e;
        for(int k=1;k<=i;k++){
            printf("%c",th);
            th++;
        }
        int a=i-1;
        int d=64+a;
        int ch=(char)d;
        for(int m=1;m<=i-1;m++){
            printf("%c",ch);
            a--;
            ch--;
        }
        printf("\n");
        

    }
    return 0;
}