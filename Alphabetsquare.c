#include<stdio.h>
int main(){
    int x;
    printf("Enter the number of rows:");
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        int a=1;
        for(int j=1;j<=x;j++){
            int d=a+64; //d=65
            char ch=(char)d; //ch=(char)65 ~ ch='A'
            printf("%c ",ch);
            a++;
        }
        printf("\n");

    }
    return 0;    
}
