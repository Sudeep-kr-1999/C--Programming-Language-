#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}

void greetHelloAndExecute(int (*fPtr)(int, int))
{
    printf("hello user\n");
    printf("the sum of 5 and 7 is : %d\n", fPtr(5, 7));
}

void greetGoodMorningAndExecute(int (*fPtr)(int, int))
{
    printf("good morning user\n");
    printf("the sum of 5 and 7 is : %d\n", fPtr(5, 7));
}
int main()
{
    printf("this is about using the function pointer in c programming\n");
    int (*ptr)(int, int);

    // note:------------ in case of function pointer hum "&" lga bhi skte h aur nhi bhi kyuki wo already ek address h!
    ptr = &sum;
    greetGoodMorningAndExecute(ptr);
    greetHelloAndExecute(ptr);
    return 0;
}

// note:------ allocation and deallocation cannot be done by using function pointers
//             function pointer is generally used to implement callback function logic