#include <stdio.h>
int main()
{
    printf("this is about other directives and predefined macros in c programming\n");
    printf("the current file name of this file is : %s\n", __FILE__);
    printf("Today date is : %s\n", __DATE__);
    printf("time now is : %s\n", __TIME__);
    printf("the line number is %d\n",__LINE__);
    printf("ANSII : %d\n",__STDC__);
    return 0;

}