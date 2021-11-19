#include <stdio.h>

// very very important
// Macros preprocessor act as the constant and preprocessor ke time wo direct value rkh deta h isliye hum use change nhi
// kr skte agr hum PI=3.44 Change krne ki koshish krege to preprocessor ke time computer PI ke jagah 3.24 rkh dega to ye
// 3.14=3.44 ho jaayega which is not correct syntax isliye hum change nhi kr skte
#define PI 3.14
int main()
{
    printf("this is about format specifiers,comments and escape sequence characters\n");
    printf("the detail info is in the slides available in the directory\n");
    int a = 8;
    float b = 7.33;
    // printf("the value of a is : %d\n", a);
    // printf("the value of b is  : %f\n", b);

    const float c = 7.34;
    printf("the value of c is %f\n", c);
    printf("The value from #define pi %d\n", PI);

    // --------------------------------------------------------------------------------------------------------
    // "%a.bf" means total length a hoga including decimal and decimal ke baad b value tk hoga
    // if actual digit is less than a to left se starting se space lekr length a ke brabr kraga
    // but if actual digit is greater than a there will be no effect

    printf("the value of b is %10.4f\n", b);
    // output------------> the value of b is     7.3300 (total length 10 starting se space le liya h)

    // --------------------------------------------------------------------------------------------------------------
    // "%-a.bf" means total length a hoga including decimal and decimal ke baad b value tk hoga
    // if actual digit is less than a to right mein space lekr length a ke brabr kraga
    // but if actual digit is greater than a there will be no effect

    printf("the value of b is %-10.4f\n", b);
    // the value of b is 7.3300     (right mein spaces kr dega )

    printf("my backslash is \\ \n");
    return 0;


}

// format specifiers :
// int---> %d
// float ----> %f
// character----> %c
// long int ------> %l
// double-----------> %lf
// long double--------> %Lf

// scape sequence character
// "\n"---> itself act as a single character