#include<stdio.h>

int areaofcircle(int r);

int main(){

    int radius=5;
    int result=areaofcircle(radius);
    printf("AreaofCricle:%d",result);

    return 0;
}

int areaofcircle(int r){
    return 3.14*r*r;
}