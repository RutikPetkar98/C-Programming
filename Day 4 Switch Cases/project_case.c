#include <stdio.h>
int main()
{
    printf("Parikrama Group of institute Department of Engineering\n");
    printf("Option 1 Department of Computer \n");
    printf("Option 2 Department of ENTC \n");
    printf("Option 3 Departmrnt of Civil \n");
    printf("Option 4 Departmrnt of Mechanical \n");
    printf("Enter the Department :");
    int Expr;
    scanf("%d", &Expr);
    switch (Expr)
    {
    case 1:

    {
        printf("Option A for Department Addmisions \n");
        printf("Option B for Department Fees \n");
        printf("Option C for Department Staff \n");
        printf("Option D for Department Progress \n");
        char o, temp;
        scanf("%c", &temp);
        scanf("%c", &o);
        switch (o)
        {
        case 'A':
            printf("Computer Department Addmision is 75 Student\n");
            break;
        case 'B':
            printf("Computer Department Fees is 75K \n");
            break;
        case 'C':
            printf("Computer Department Staff is 15 techers \n");
            break;
        case 'D':
            printf("Computer Department Progress is Excellent\n ");
            break;

        default:
        {
            printf("Invalid Input\n");
            break;
        }
        }
    }
    case 2:
    {
        printf("Option A for Department Addmisions \n");
        printf("Option B for Department Fees \n");
        printf("Option C for Department Staff \n");
        printf("Option D for Department Progress \n");
        char o, temp;
        scanf("%c", &temp);
        scanf("%c", &o);
        switch (o)
        {
        case 'A':
            printf("ENTC Department Addmision is 60 Student\n");
            break;
        case 'B':
            printf("ENTC Department Fees is 55k \n");
            break;
        case 'C':
            printf("ENTC Department Staff is 12 teacher \n");
            break;
        case 'D':
            printf("ENTC Department Progress is Excellent \n");
            break;

        default:
        {
            printf("Invalid Input");
            break;
        }
        }
    }
    case 3:
    {
        printf("Option A for Department Addmisions \n");
        printf("Option B for Department Fees \n");
        printf("Option C for Department Staff \n");
        printf("Option D for Department Progress \n");
        char o, temp;
        scanf("%c", &temp);
        scanf("%c", &o);
        switch (o)
        {
        case 'A':
            printf("Civil Department Addmision is 120");
            break;
        case 'B':
            printf("Civil Department fees is 98k");
            break;
        case 'C':
            printf("Civil Department staff is 20 teacher");
            break;
        case 'D':
            printf("Civil Department Progress is Excelent");
            break;
        default:
        {
            printf("Invalid Input\n");
        }
      }
    }
    case 4:
    {
        printf("Option A for Department Addmisions \n");
        printf("Option B for Department Fees \n");
        printf("Option C for Department Staff \n");
        printf("Option D for Department Progress \n");
        char o, temp;
        scanf("%c", &temp);
        scanf("%c", &o);
        switch (o)
        {
        case 'A':
            printf("Mechanical Department Addmision is 60");
            break;
        case 'B':
            printf("Mechanical Department fees is 60k");
            break;
        case 'C':
            printf("Mechanical Department staff is 15 teacher");
            break;
        case 'D':
            printf("Mechanical Department Progress is Good");
            break;
        default:
        {
            printf("Invalid Input\n");
        }
        }
    }
    
    
    
default:
    {
        printf("Invlaid Input");
    }
    
}

return 0;
}