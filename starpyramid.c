//METHOD 1

// #include<stdio.h>
// int main(){
//     int x;
//     printf("Enter the number of rows:");
//     scanf("%d",&x);
//     int nst =1; //nst is number of stars
//     for(int i=1;i<=x;i++){
//            for(int k=1;k<=x-i;k++){
//             printf(" ");
//         }     
//         for(int j=1;j<=nst;j++){
//             printf("*");

//         }
//         nst = nst+2;
//         printf("\n");
//     }
//     return 0;
// }

//METHOD 2

#include<stdio.h>
int main(){
    int x;
    printf("Enter the number of rows:");
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        for(int k=1;k<=x-i;k++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("*");

        }
        printf("\n");
    }
    return 0;
}

//METHOD 3

// #include<stdio.h>
// int main(){
//     int x;
//     printf("Enter the number of rows:");
//     scanf("%d",&x);
//     int nst =1;
//     int nsp =3;
//     for(int i=1;i<=x;i++){
//         for(int k=1;k<=x-i;k++){
//             printf(" ");
//         }
//         nsp = nsp-1;
//         for(int j=1;j<=2*i-1;j++){
//             printf("*");

//         }
//         nst = nst+2;
//         printf("\n");
//     }
//     return 0;
// }