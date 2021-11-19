#include <stdio.h>
int main()
{
    printf("this is about void pointer in c programming\n");
    int a = 45;
    float b = 8.3;
    void *ptr;
    ptr = &a;

    // here the pointer typecasted to the integer pointer for "a".
    printf("the value of a is : %d\n", *(int *)ptr);

    ptr = &b;
    // here the pointer typecasted to the float pointer for "b"
    printf("the value of b is : %f\n", *(float *)ptr);
    return 0;
}

// note:---
// 1. void pointer is a pointer that has no data types associated with it
// 2. A void pointer can be easily typecated to any pointer type
// 3. In simple language it it a general purpose pointer variable hum kbhi bhi kisi bhi datatype ka address store kr skte h
// but value nikalne ke liye typecasting krna padega.........
// 4. since ye void pointer hai to hume data type pta nhi h to value nikalne ke liye hume ise explictly typecasted krke
//     dereference krna h....!
// 5. pointer arithmatic is not allowed with void pointer in c standard programming generally but koi koi compiler allow
// krta h but not recommended......!