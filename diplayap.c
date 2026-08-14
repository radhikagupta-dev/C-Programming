    //  Display thi AP- 4,7,10,13,16... upto n terms

#include<stdio.h>
int main(){
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    for(int i=4;i<=(3*x)+1;i+=3){
        printf("%d\n",i);
    }    
    return 0;
}