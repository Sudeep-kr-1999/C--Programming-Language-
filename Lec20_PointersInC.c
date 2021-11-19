#include <stdio.h>
int main()
{
    printf("it is about pointers in c programming\n");
    int a = 76;
    printf("the value of a is  : %d\n", a);
    int *ptra;
    ptra = &a;

    // note:------- both %x and %p can be used for printing pointer address
    // %x:-------- number in hexadecimal
    printf("the value of the address of the variable a : %x\n", ptra);
    printf("the value of the address of the variable a : %p\n", ptra);
    printf("the value of the address of the variable a : %p\n", &a);
    printf("the address of the pointer is  : %p \n", &ptra);
    printf("the value of a is : %d\n", *ptra);

    // output :--------------
    // the value of the address of the variable a : 61ff18
    // the value of the address of the variable a : 0061FF18

    // =-------------------------------------------------------------------------------------------

    int *ptr2;
    int *ptr3 = NULL;

    // this will give some garbage value
    printf("the value of pointer ptr2 if it is not initialized is  :%p\n", ptr2);

    // this will give 00000000 no any address like NULL :- so this pointer is called NULL pointer
    printf("the value of pointer ptr3 when it is initialized to NULL is : %p\n", ptr3);

    return 0;
}

// Null pointer:--------------- also very important

// note:------- agar pointer ko koi address assign nhi hai to wo garbage value show krega isliye agar hum initially ek empty
// pointer bnana chahte hai to use NULL assign kr dete h takki hume pta pade ki usme kuch nhi h

// int *ptr1=NULL;