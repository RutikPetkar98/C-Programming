#include<stdio.h>
int main(){
    int num;
    printf("Check number is Odd or Even:");
    scanf("%d",&num);
    if (num%2==0)
    {
        printf("Num=%d is even\n",num);
    }
    else
    {
         printf("Num=%d is odd\n",num);
    } 
    printf("exiting....");
    


    return 0;

}