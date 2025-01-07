//Switch Case using Print the Weeks Day Program 
#include<stdio.h>
int main(){
    int day;
    printf("Enter the no:");
    scanf("%d",&day );
    switch (day)
    {
    case 1:{
        printf("Monday",day);
    }
        break;
    case 2:{
        printf("Tuesday",day);

    }
    break;
    case 3:{
        printf("Wednesday",day);
    }
    break;
    case 4:{
        printf("Thursday",day);
    }
    break;
    case 5:{
        printf("Friday\n",day);

    }
    break;
    case 6:{
        printf("Saturday",day);
    }
    break;
    case 7:{
        printf("Sunday",day);
    }
    break;
    default:
          printf("Invalid Input");
        break;
    }
    return 0;

}