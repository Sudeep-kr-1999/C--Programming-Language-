#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    printf("it is about the function pointer in c progarmming\n");
    // printf("the sum of 1 and 2 is  : %d\n",sum(1,2));

    // this means ye *fPtr pointer ek aise function ko point kr rha hai jo ki ek integer return krta hai aur as arguments
    // 2 integer leta h....!
    int (*fPtr)(int, int);

    // pointer start to point to the function
    fPtr = &sum;

    // now on dereferencing the fPtr pointer by doing (*fPtr) we get the funciton because pointer function contain kr rha hai
    // and after that we provide the required argument to the function and the function give us the output stored in "d" variable
    int d = (*fPtr)(4, 6);
    printf("The value of d is : %d\n", d);

    return 0;
}

// function pointer:----------- the pointer which point to a function is called function pointer