//all loop using print 1 to 10 number 
#include<stdio.h>
int main(){
      printf("using for loop:\n");
      for(int i=0;i<=10;i++){
        printf("%d\n",i);
      }
     

    int j=1;
    printf("using do while loop:\n");
     do{
        printf(" %d\n",j);
        j++;
     }while(j<=10);



    int k=1;
    printf("using while loop:\n");
     while( k<=10){
          printf(" %d\n",k);
          k++;
     }
    
      
    return 0;
}