// #include<stdio.h>
// int main(){
//     int x,y;
//     printf("Enter the number of rows:");
//     scanf("%d",&x);
//     printf("Enter the number of columns:");
//     scanf("%d",&y);
//     for(int i=1;i<=x;i++){
//         for(int j=1;j<=x-i;j++){
//             printf(" ");
//         }
//         for (int k=1;k<=y;k++){
//             printf("*");
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
    for(int i=1;i<=x;i++){
        for(int j=1;j<=nsp-1;j++){
            printf(" ");
        }
        nsp--;
        for (int k=1;k<=x;k++){
            printf("*");
        }
        printf("\n");
        
    }
    return 0;
}