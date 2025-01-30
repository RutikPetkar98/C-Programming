#include<stdio.h>
int main(){
     
      FILE *fptr;

      fptr=fopen("example.p","r");

      if(fptr!=NULL){
        printf("File Exist\n");
      }
      else{
        printf("File does not Exist\n");
      }


      
    return 0;
}