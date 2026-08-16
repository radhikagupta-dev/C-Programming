// #include<stdio.h>
// int main(){
//     int x;
//     printf("Enter the number of rows:");
//     scanf("%d",&x);
//     int min=0;
//     for(int i=1;i<=2*x-1;i++){
//         for(int j=1;j<=2*x-1;j++){
//             int a=i;
//             if(i>x){
//                 a=2*x-i;
//             }
//             int b=j;
//             if(b>x){
//                 b=2*x-j;
//             }
//             if(a<b)min=a;
//             else min=b;
//             printf("%d",x+1-min);
//         }
//         printf("\n");
//     }
//     return 0;
// }


#include<stdio.h>
int minimum(int a,int b){
    int min = a;
    if(b<a) min = b;
    return min;
}
int main(){
    int x;
    printf("Enter the number of rows:");
    scanf("%d",&x);
    int min=0;
    for(int i=1;i<=2*x-1;i++){
        for(int j=1;j<=2*x-1;j++){
            int a=i;
            if(i>x)a=2*x-i;
            
            int b=j;
            if(b>x)b=2*x-j;
            
            min= minimum(a,b);
            printf("%d",x+1-min);
        }
        printf("\n");
    }
    return 0;
}