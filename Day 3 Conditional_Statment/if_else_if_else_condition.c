#include<stdio.h>
int main(){
    int percent;
    printf("Enter the number:");
    scanf("%d",&percent);

    if (percent>=91 && percent <= 100)
    {
        printf("your mark is %d and A+ grade\n",percent);
    }
    else if (percent>=81 && percent <=90) 
    {
        printf("your mark is %d and A grade\n",percent);
    }
    else if (percent >=71 && percent <=80)
    {
       printf("your marks is %d and B+ grade\n");
    }
    else if (percent>=61 && percent <=70)
    {
        printf("your marks is %d and B grade\n");
    }
     else if (percent>=51 && percent <=60)
    {
        printf("your marks is %d and C grade\n");
    }
     else if (percent>=41 && percent <=50)
    {
        printf("your marks is %d and D grade\n");
    }
     else if (percent>=34 && percent <=40)
    {
        printf("your marks is %d and E grade\n");
    }
    else
    {
        ("Are you Fail Better Luck next time");
    }
   
    return 0;
}