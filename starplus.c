#include<stdio.h>
int main(){
    int x;
    printf("Enter the number of rows:");
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        for(int j=1;j<=x;j++){
            if(j==(x+1)/2 || i==(x+1)/2){
                printf("*");
            }
            else{
                printf(" ");
            }    
        }
        printf("\n");
    }
    return 0;
    
}