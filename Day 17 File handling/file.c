#include <stdio.h>
// file handling
// r=read;
// w=write;
// a=append;
int main()
{

  FILE *fptr;

  fptr = fopen("example.txt", "w");

  if (fptr != NULL)
  {
    printf("File Exist\n");
  }
  else
  {
    printf("File does not Exist\n");
  }

  int enct = 0;

  if (int i = 0; i < 20; i++)
  {
    printf("Write Successfully\n");
    enct++;
  }
  else
  {
    printf("Write Unsuccessfully\n");
  }

  return 0;
}