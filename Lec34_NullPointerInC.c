#include <stdio.h>
int main()
{
    printf("this is about the null pointer in c programming\n");
    printf("all the important theoritical info is in the screenshot in the directory\n");
    int a = 34;
    int *ptr = NULL;
    // int *ptr=&a;

    // note:--- if NULL pointer ki value print krna chahege to programme crash kr dega to avoid this we must check wether
    //             the pointer is NULL or not..........

    // by default pointer kisi bhi garbage address ko point kr skta h ( jo exist kr bhi skti hai or nhi bhi)
    if (ptr != NULL)
    {
        printf("the address hold by ptr is  : %p\n", ptr);
        printf("the value at ptr is : %d\n", *ptr);
    }
    else
    {
        printf("the pointer is the NULL pointer and cannot be dereferenced\n");
    }

    // note:------- in general NULL ki integral value 0 hoti h
    printf("the value of NULL is %d", NULL);
    return 0;
}