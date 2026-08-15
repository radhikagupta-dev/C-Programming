#include<stdio.h>
int main(){
    int x;
    printf("Enter x:");
    scanf("%d",&x);
    for(int i=0;i<=x;i++){
        int first =1;
        for(int j=0;j<=i;j++){
            printf("%d ",first);
            // first = first*(i-j)/(j+1);
        }
        printf("\n");
    }
    return 0;
}