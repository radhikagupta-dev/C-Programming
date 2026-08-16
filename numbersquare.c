//METHOD 1
 #include<stdio.h>
 int main(){
     int n;
     printf("Enter number of rows:");
     scanf("%d",&n);
     for(int i=1;i<=n;i++){ // number of lines/rows
         for(int j=1;j<=5;j++){ // number of columns
             printf("%d",j);
         }
         printf("\n");
            
     }
     return 0;
    }     
    


//     return 0;
// }


//METHOD 2
// #include<stdio.h>
// int main(){
//     int x;
//     printf("Enter the number of rows:");
//     scanf("%d",&x);
//     for(int i=1;i<=x;i++){
//         int a=1;
//         for(int j=1;j<=x;j++){
//             printf("%d",a);
//             a++;
            
//         }
//         printf("\n");

//     }
//     return 0;
// }