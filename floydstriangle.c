// #include<stdio.h>
// int main(){
//     int x;
//     printf("Enter the number of rows:");
//     scanf("%d",&x);
//     int a=1;
//     for(int i=1;i<=x;i++){
//         for(int j=1;j<=i;j++){
//             printf("%d ",a);
//             a++;
           
//         }
//         printf("\n");
//     }    
//     return 0;
// }  


//PRINT ALL THE ODD TERMS
#include<stdio.h>
int main(){
    int x;
    printf("Enter the number of rows:");
    scanf("%d",&x);
    int a=1;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",a);
            a=a+2;
           
        }
        printf("\n");
    }    
    return 0;
}    

