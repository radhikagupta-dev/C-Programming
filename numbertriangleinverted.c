#include<stdio.h>
int main(){
    int x;
    printf("Enter the number of rows:");
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        for(int j=1;j<=x+1-i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}