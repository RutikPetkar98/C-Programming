#include <stdio.h>
#include <string.h>

// structure : structure is collection of primitive data members

struct stud
{
    int s_id;
    char s_name[20];
    double s_marks;
}

typedef stud;

int main()
{

    stud s1;
    int s_id = 101;
    char s_name[20] = "Rutik";
    strcpy(s1.s_name, s_name);
    s1.s_marks = 78.90;

    printf("id:%d\n", s1.s_id);
    printf("Name=%s\n", s1.s_name);
    printf("Marks=%lf\n", s1.s_marks);

    return 0;
}