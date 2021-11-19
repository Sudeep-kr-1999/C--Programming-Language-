#include <stdio.h>

// typecasting syntax
// (type)value;
int main()
{
    printf("this is about typecasting in c programming\n");
    int a = 3;
    printf("the value of a is : %d\n", a);

    // note:---------by default 54/5 ka value 10 ayega because in c programming agar hum "int" and "int" mein koi bhi arithmatic
    //                 operation krte hai to by default compiler "int" mein hi ans dega this is called type conversion jo
    //                compiler khud hi kr leta hai

    // note:----------- -"int" and "float" mein agar krte hai to ans "float" aayega

    // note:------------- "float" and "float" mein krte hai to ans "float" aayega
    float b = 54 / 5;
    printf("the value of b is : %f", b);
    // note:------ here we use %d Because we type cast the value of b to integer type
    printf("the value of b is : %d", (int)b);

    // if we want to do it as float :  to kisi ek ko float mein convert kr lo kaam ho jaayega
    float c = (float)54 / 5;
    printf("the value of c is : %f", c);

    return 0;
}