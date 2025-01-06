#include <stdio.h>
int main()
{
  int age ;
  printf("Enter the age:\n");
  scanf("%d",&age);
  if (age >= 18)
  {
    printf("eligiable for voter id card\n");
    if (age >= 21)
    {
      printf("eligiable for candidecy\n");
    }
    else
    {
      printf("but not eligiable for candidecy\n");
    }
      }
    else
    {
      printf("not eligiable for voter id card\n");
    }

  return 0;
}