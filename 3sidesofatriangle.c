#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter three numbers:");
    scanf("%d%d%d",&x,&y,&z);
    if ((x+y)>z &&(y+z)>x &&(z+x)>y){
        printf("They can be the sides of a triangle");
    }
    else{
        printf("They can not be the sides of a triangle");
    }
    return 0;
}