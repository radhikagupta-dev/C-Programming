#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the number of rows:");
    scanf("%d",&x);
    printf("Enter the number of columns:");
    scanf("%d",&y);
    for(int i=1;i<=x;i++){
        for(int j=1;j<=y;j++){
            if(j==y || j==1 || i==x || i==1){ //Important point to note that x is number of rows so it will be associated with i and y(Number of columns) with j otherwise it will only print the desired output for squares and not rectangle.
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