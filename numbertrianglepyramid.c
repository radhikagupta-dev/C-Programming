//HOMEWORK
//PRINT THE GIVEN PATTERN
//1234321
//123 321
//12   21
//1     1

#include<stdio.h>
int main(){
    int x;
    printf("Enter the number of rows:");
    scanf("%d",&x);
    int nst=x;
    int nsp=1;
    for(int i=1;i<=2*x-1;i++){
        if(i<=nst){
            printf("%d",i);   
        }
         else{
            printf("%d",2*x-i);  
        }

    }
    printf("\n");
    for(int i=1;i<=x;i++){
        int a=1;
        int b=x-i;
        for(int j=1;j<=nst-1;j++){
            printf("%d",a);
            a++;   
        }
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        for(int l=1;l<=nst-1;l++){
            printf("%d",b);
            b--;
        }
        nst--;
        nsp+=2;
        printf("\n");
        
    }

    return 0;
}