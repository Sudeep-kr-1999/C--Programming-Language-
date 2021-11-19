#include <stdio.h>
#include<stdlib.h>
int main()
{
    printf("this is about wild pointer in c programming\n");
    int a=334;

    // this is the wild pointer iske andar kuch bhi ho skta h 
    int * ptr;

    // this is not a good thing to do for a programmer 
    // *ptr=34; 

    // ptr is no longer wild pointer 
    ptr=&a;
    printf("the value of a is : %d\n",*ptr);





    return 0;
}

// note:-------
// 1. uninitialized pointers are known as wild pointer
// 2. these pointers point to some arbitrary location in memory location and may cause a program to crash and behave badly
// 3. dereferencing wild pointer can cause nasty bugs
// 4. it is suggested to always initialize unused pointers to NULL
