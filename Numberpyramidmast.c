// #include<stdio.h>
// int main(){
//     int x;
//     printf("Enter the number of rows:");
//     scanf("%d",&x);
//     for(int i=1;i<=x;i++){ 
        
//         for(int m=1;m<=x-i;m++){ //loop for spaces
//             printf(" ");
//         }       
//         for(int k=1;k<=i;k++){ //number triangle
//             printf("%d",k);
//         }
//         int a=i-1;
//         for(int j=1;j<=i-1;j++){ // extrra tringle on the right to make it a pyramid
//             printf("%d",a);
//             a--;

//         }
//         printf("\n");
//     }
//     return 0;
// }

#include<stdio.h>
int main(){
    int x;
    printf("Enter the number of rows:");
    scanf("%d",&x);
    int nsp=x;
    int nst=1;
    for(int i=1;i<=x;i++){
        int a=i-1;
        for(int j=1;j<=nsp-1;j++){
            printf(" ");
        }
        for(int k=1;k<=nst;k++){
            printf("%d",k);
        }
        
        for(int l=1;l<=i-1;l++){
            printf("%d",a);
            a--;
        }
        
        nsp--;
        nst++;
        printf("\n");
    }
    return 0;
}