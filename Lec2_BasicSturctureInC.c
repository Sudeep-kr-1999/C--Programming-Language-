// it is a preprocessor command
#include <stdio.h>

int main()
{
    printf("this is the basic structure of c programming\n");
    int a, b;
    int c = 23;
    printf("enter the number a : ");
    scanf("%d", &a);
    printf("enter the number b : ");
    scanf("%d", &b);
    printf("the addition of the number is %d \n", a + b);

    // very very important
    // note:---- printf() return the number of character printed means jo print hua usme ketne character hai chahe
    // phir wo kuch bhi ho number , char etc...... and scanf return the number of inputs scanned successfully
    printf("%d", printf("%d", c));
    return 0;
}

// steps of execution of c programming files
// 1. preprocessing:----- in this step sbhi comment programme se htakr aur header file ke content ko expand krke
// and then the programme written by us sbko ".i" extention waale file mein rkh diya jaata h

// 2.compiling:-- in this process pre processed file output ko assembly language instructions mein convert kiya jaata h aur
//    ".s" extention waale file mein save ki jaati h

// 3.assembling:--- isme assembly language output ko manchine level code mein convert kiya jaata hai jo ".o" extention waale
//                 binary file mein save hoti hai .

// 4. linking :---- linker hota hai wo saari ".o" file ko dekhkr ek ".exe" file bna deta hai jo hume dikhta ha ya jo hum
//                 use mein lete h
