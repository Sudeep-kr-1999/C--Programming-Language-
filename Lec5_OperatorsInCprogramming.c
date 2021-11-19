#include <stdio.h>
int main()
{
    printf("this is about operators in c programming and precedence of the operators\n");
    printf("details are in the slides of opertors for reference of theoritial part\n");
    int a, b;
    float c = 25.5;
    a = 34;
    b = 6;
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a mod b = %d\n", a % b);
    printf("a==b returns : %d\n", a == b);
    printf("a||b is %d\n", a || b);

    // note:------ if we do any arithmatic operation between 2 int it will return int
    // if we do any arithmatic operation between 1 int and 1 float then return should be float else it give 0 or error
    // two float should give float as return

    // it will give 0 or error or garbage value
    // printf("%d",a-c);

    // it will work fine since the return is of type float
    // printf("%f", a - c);

    return 0;
}