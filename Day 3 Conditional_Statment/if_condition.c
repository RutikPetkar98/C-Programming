#include<stdio.h>
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if (num>10)
    {
        printf("num=%d is greather than 10\n",num);
    }
    printf("exiting...");
    
    return 0;
}