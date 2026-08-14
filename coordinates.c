#include<stdio.h>
int main(){
    float x,y;
    printf("Enter the values of x and y respectively:");
    scanf("%d\n%d",&x,&y);
    if(x==0 && y==0) printf("Coordinate lies on the origin");
    else if(x==0) printf("Coordinate lies ob the y-axis");
    else if(y==0) printf("Coordinate lies on the x-axis");
    else printf("The coordinate does not lie on axes");
    return 0;
}