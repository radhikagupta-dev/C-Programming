#include<stdio.h>
int main(){
    int x;
    printf("Enter the number of rows:");
    scanf("%d",&x);
    for (int i=1;i<=x;i++){
        int a=1;
        for(int j=1;j<=i;j++){
            int d=a+64;
            char ch=(char)d;
            if(i%2==0){
                printf("%d",a);

            }
            else if (i%2!=0){
                printf("%c",ch);
            }
             a++;


        }
        printf("\n");
    }
    return 0;
}