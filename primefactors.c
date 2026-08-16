#include<stdio.h>
int we(int r){
    if(r<2) return 0;
    for(int i=2;i<r;i++){
        if(r%i==0){
            return 0;  
        }
    }
    return 1;
}
int fac(int x){
    int num;
    for(int i=1;i<=x;i++){
        if(x%i==0 && we(i)){
            num =i;
            printf("Factor of %d is %d\n",x,i); 
        }
         
    } 
    return num;  
}
int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    int num = fac(a);
    return 0;
}