#include<stdio.h>
#include <stdio.h>

// int main() {
//    for (int i =1; i <= 1000; i++){
//        printf("sorry\n");
//    }
   
//     return 0;
// }



// enum week {
//     WEAK,
//     MONDAY,
//     TUESDAY,
//     WEDNESDAY,
//     THURSDAY,
//     FRIDAY,
//     SATURDAY,
//     SUNDAY
// };


// int main() {
//     enum week today = SUNDAY;
//     printf("Today is %d", today);
//     return 0;
// }

#include <stdio.h>
#include <string.h>

// create struct with person1 variable
struct Person {
  char name[50];
  int citNo;
  float salary;
} person1;

int main() {

  // assign value to name of person1
  strcpy(person1.name, "George Orwell");

  // assign values to other person1 variables
  person1.citNo = 1984;
  person1. salary = 2500;

  // print struct variables
  printf("Name: %s\n", person1.name);
  printf("Citizenship No.: %d\n", person1.citNo);
  printf("Salary: %.2f", person1.salary);

  return 0;
}