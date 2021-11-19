#include <stdio.h>

// call by reference example
void changeValue(int *address)
{
    *address = 345;
}
int main()
{
    printf("this is about call by value and call by reference in c++ programming\n");
    int a = 34, b = 56;
    printf("the value of a before function call is  : %d\n", a);
    changeValue(&a);
    printf("the value of a after function call  is  : %d\n", a);
    return 0;
}