#include <stdio.h>

// jb bhi hum include krte h to 2 main function ho jaate hai to hume included file mein jaakr main ko comment krege
#include "Lec38_PreProcessorInC.c"
# define PI 3.14

// macros (like a function)
#define square(r) r*r
int main()
{
    int var = 0;
    int r=4;
    printf("this is about \"include\" and \"define\" preprocessor in c programming\n");
    printf("this is me %d\n", var);
    float pi=PI;
    printf("the value of PI is : %f\n",pi);
    printf("the area of  circle with radius 4 is : %f\n",pi*square(4));
    return 0;
}