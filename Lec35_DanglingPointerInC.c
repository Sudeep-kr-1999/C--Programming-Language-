#include <stdio.h>
#include <stdlib.h>

int *functionDangling()
{
    int a = 34;
    int b = 364;
    int sum = a + b;
    return &sum;
}
int main()
{
    printf("this is about dangling pointer in c programming language\n");
    printf("all the important theoritial info about dangling pointer is in the screenshot in the directory\n");

    // case :1 - De allocation of a memory block
    int *ptr = (int *)malloc(7 * sizeof(int));
    ptr[0] = 34;
    ptr[1] = 36;
    ptr[2] = 64;
    ptr[3] = 5;

    // here ptr is now a dangling pointer (deallocation of a memory block)
    fee(ptr);

    // --------------------------------------------------------------------------------------------
    // case:2 function returning local variable address

    // since function return kr chuka to ab uske andr ka content delete ho chuka since local tha to int*dangPtr ko nhi pta ki wo
    // kiska address h ... kyuki wo ab wha h hi nhi means dangling pointer
    int *dangPtr = functionDangling();

    // --------------------------------------------------------------------------------------------
    // Case :3 If variable go out of scope
    int *danglingPtr3;
    {
        int a = 12;

        // this is valid since scope mein "a" available hai
        danglingPtr3 = &a;
    }

    // here variable a goes out of scope which means danglingPtr3 is pointing to a location which is freed and hence it is
    // now dangling pointer

    return 0;
}