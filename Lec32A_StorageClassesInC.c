#include <stdio.h>
// #include "Lec32B_externKeywordExplanationInLec32A.c"

// int sum;
int myFunc(int a, int b)
{
    // auto int sum;

    // agar hum chahte hai ki yha local sum ke jagah global sum return ho to hum extrn int sum kr skte h
    extern int sum;
    // sum = a + b;
    static int myVar;
    myVar++;
    printf("the value of myVar is : %d\n", myVar);
    return sum;
}

// this will give error saying sum is already declared because it is already declared in file imported
// int sum=34;

int sum = 343;
int main()
{
    // declaration:-- telling the compiler about the variable no space reserved
    // definition:-- declaration and space reservation
    printf("this is about storage classes in c programming\n");
    // printf("the sum for global variable is : %d\n", sum);
    register int sum = myFunc(3, 5);
    // printf("the sum is  : %d\n", sum);

    // int sum=98;
    printf("the sum for extern variable is : %d\n", sum);
    return 0;
}

// ---------------------------------------------------------------------------------------------------------------
// note:----------- in c programming there are four storage classes generrally used:----
// // 1. automatic variables
// same as local variable
//         scope:---- local to the function body
//         default value:--- garbage value(random)
//         lifetime:--- till the end of the function block they are defined
// note:-------- it is the default storage class in c programming

// ---------------------------------------------------------------------------------------------------------------

// 2. external variables
//            same as global variable
//            scope:-- global to the program they are defined in
//            default value : - 0
//            lifetime : - these variables are declared outside any function .  They ae avialable throughout the lifetime of the
//                         program

// note:------------------------
// extern variable:--- extern keyword is used to inform c compiler that given variable is declared somewhere else
//                     using extern will not allocate space for the variable. basically hum compiler ko btate hai ki
//                     variable khi n khi se aane wla h

// ---------------------------------------------------------------------------------------------------------------

// 3. static variables
//            scope:-- local to the program they are defined in
//            default value : - 0
//            lifetime : - they are available throughout the programme

// ---------------------------------------------------------------------------------------------------------------

// 4 register variables
//            scope:-- local to the program they are defined in
//            default value : - Garbage Value(Random)
//            lifetime : - they are available till the end of the function block , in which these variables is defined

//   Register variables request the compiler to store the variables in CPU register, instead of storing in the memory to have
//   faster access

// Generally this is done for the variables which are being used frequently

// NOTE:---- Agar register available nhi hai to compiler by default ise auto storage class bna kr de dega
// ---------------------------------------------------------------------------------------------------------------

// a storage class defines following attributes about the variable in c:-------
// 1. scope :-------- variable kha kha available ho skta h
// 2. default initial value------ initial value kya hoga
// 3. lifetime:--- kb tk variable ka use kr skte h (kb tk vairable jinda h)