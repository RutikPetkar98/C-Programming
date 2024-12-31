#include <stdio.h>

int main()
{
     //integer define as a number (%d print format statment)
    int a=10;
    int b=20;
    printf("addition=%d\n",a+b);

    //Character define as special charavter and A,a (%c print format statment)
     char star='$';
     printf("STAR=%c\n",star);

    //float defien as a point value 19.000  (%f print format statment)
     float bal=10943.1230;
     printf("balance=%f\n",bal);

    //double define as a number with length of 8 byte
     double d=12.222222;
     printf("double_Value:%lf\n",d);

    //short define as number with length of 2 byte 
    short s=12345;
    printf("short_value=%hd\n",s);

    //long define as number with length of 8 byte

    long l=123456789;
    printf("long_value=%li",l);


    
    return 0;
}