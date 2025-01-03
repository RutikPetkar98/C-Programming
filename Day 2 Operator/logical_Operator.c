/**
 * Logical Operator
 * AND (&&) operator
 * OR (||) operator
 * NOT (!) operator
 * 
 * AND(&&)
 * P Q  P&&Q
 * T T    T
 * T F    F
 * F T    F
 * F F    F
 * 
 * OR (||)
 * P Q  P||Q
 * T T   T
 * T F   T
 * F T   T
 * F F   F
 * 
 * NOT (!)
 * P !P
 * T  F 
 * F  T
 */




#include<stdio.h>
int main(){
    int num1=10;
    int num2=20;
    int num3=10;

    //&& Operator
    printf("%d\n ",num1<num2 && num1!=num2);
    
    //|| Operator
    printf("%d\n",num1>num2 || num1==num2);

    //! Operator
    printf("%d\n",!(num1<num2 && num1!=num2));
    
    return 0;
}