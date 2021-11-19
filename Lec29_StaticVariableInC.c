#include <stdio.h>

// syntax for static variable :--------
// static varible apne value ko yaad rkhta hai taaki jb dobara kbhi koi use access kre to use yaad rhe ki pehle kya value thi,
//  uske according wo behave kre even they go out of scope

// sirf ek hi baar initialize ho skta hai (vvi ) with constant litral only , by default 0 value hoti h

// note :---- static variable ke liye memory programme ke run krne se pehle hi memory allocate honi hoti h to usee sb kuch fixed
//             chahiye agr use koi function() dge to ho skta hai value kuch bhi return kre jo usee  memory allocate krne mein
//             confusion create krega (vvi)

// static <data_type><name_of_variable>=<value>

// global variable : this is the global variable since it is declared outside the main()
int b = 34;
int func1(int b1)
{
    // int loc=89;

    // static variable khud ki value ko preserve rakhege
    // static int myVar=0;
    static int myVar = 98;
    myVar++;
    printf("the value of myVar is %d\n", myVar);

    // printf("the address of b1 inside func1 is : %d\n", &b1);
    printf("the value of b inside func1 is  : %d\n", b);
    return b1 + myVar;
}
int main()
{
    printf("this is about static variable in c programming\n");
    int b1 = 344;
    int val = func1(b1);
    int *ptr = &val;
    printf("the address of b1 inside main is  : %d\n", &b1);
    printf("the value of func1 is : %d\n", val);
    func1(b1);
    func1(b1);
    return 0;
}
