#include<stdio.h>
#include<math.h>
  void add(int  a,int b);
  void subtrack(int  a,int  b);
  void multiply(int  a,int b);
  void division(int a,int b);

int main(){
    int num1;
    int num2;
    char operator;

    printf("Enter First number:");
    scanf("%d",&num1);

    printf("Enter the Operator (+,-,*,/): ");
    scanf(" %c", &operator);

    printf("Enter Second number:");
    scanf("%d",&num2);

    switch (operator)
    {
    case '+':
        add(num1,num2);
        break;
    case '-':
        subtrack(num1,num2);
        break;

    case '*':
        multiply(num1,num2);
        break;
    
    case '/':
        division(num1,num2);
        break;
    
    default:
         printf("Invalid Input");
        break;
    }

    return 0;
}

void add(int a,int b){
    printf("Result:%d\n",a+b);
}

void subtrack(int a,int b){
    printf("Result:%d\n",a-b);
}
void multiply(int a,int b){
    printf("Result:%d\n",a*b);S
    else{
         printf("Error: Division by zero is undefined\n");
    }
}

