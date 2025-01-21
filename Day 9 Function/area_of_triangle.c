#include<stdio.h>
#include<math.h>

int areaoftriangle(int h,int b);
int main(){
    int h=20;
    int b=30;
    int result=areaoftriangle(h,b);
    printf("Area_of_triangle:%d",result);
    return 0;
}

int areaoftriangle(h,b){
    return (0.5)*h*b;
}