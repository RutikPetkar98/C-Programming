
/**
 * & And 
 * | OR
 * ^ XOR
 * ~ Complement
 * << leftshift
 * >> Rightshift
 * 
 * AND(&)
 * P Q  P&Q
 * T T    T
 * T F    F
 * F T    F
 * F F    F
 * 
 * OR (|)
 * P Q  P||Q
 * T T   T
 * T F   T
 * F T   T
 * F F   F
 * 
 *  ^
 * P Q ^
 * T T F
 * T F T
 * F T T
 * F F F
 * 
 * ~
 * P ~
 * T F
 * F T
 */
#include<stdio.h>
int main(){

  int a=5; //0101
  int b=10; //1010

  //&
  printf("sum:%d\n",a&b);

  //|
  printf("sum:%d\n",a|b);

  //^
  printf("sum:%d\n",a^b);

  //~
  printf("sum:%d\n",~a);

 
  //<<
  printf("sum:a<<1%d\n",a<<1);

   a=20;
   //<<
   printf("sum:a<<1%d\n",a<<1);

   //>>
   printf("sum:a>>2%d\n",a>>2);

  return 0;  
}