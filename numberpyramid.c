// #include<stdio.h>
// int main(){
//     int x;
//     printf("Enter the number of rows:");
//     scanf("%d",&x);
//     for(int i=1;i<=x;i++){
//         for(int j=1;j<=x-i;j++){
//             printf(" ");
//         }
//         for(int k=1;k<=2*i-1;k++){
//             printf("%d",k);

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
        for(int j=1;j<=nsp-1;j++){
            printf(" ");
        }
        for(int k=1;k<=nst;k++){
            printf("%d",k);

        }
        nsp--;
        nst+=2;
        printf("\n");
        
    }
    return 0;
}