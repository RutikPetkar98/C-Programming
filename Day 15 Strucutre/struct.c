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

    // struct array
    // int arr[size];
    stud arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter stud_id:");
        scanf("%d", &arr[i].s_id);
        printf("enter stud_name:");
        char temp[20];
        scanf("%s", &temp);
        strcpy(arr[i].s_name, temp);
        printf("enter stud_marks:");
        scanf("%lf", &arr[i].s_marks);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("stud_id:%d\n", arr[i].s_id);
        printf("stud_name:%s\n", arr[i].s_name);
        printf("stud_marks:%lf\n", arr[i].s_marks);
    }

    return 0;
}