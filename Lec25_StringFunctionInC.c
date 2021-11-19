#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    printf("this is about string functions in c programming\n");
    char s1[] = "harry";
    char s2[] = "ravi";

    // note:-------- s1 mein s1+s2 krke put kr dega
    // printf(strcat(s1, s2));

    // strlen():------ it will give the length without counting "null character" in the string
    // printf("the length of s1 is %d\n", strlen(s1));
    // printf("the length of s2 is %d\n", strlen(s2));

    // printf("the reversed string s1 is : ");
    // printf(strrev(s1));
    // printf("the reversed string s2 is : ");
    // printf(strrev(s2));

    // char str3[34];

    // note:----------- we cannot do str3=strcat(s1,s2); it will give the error mention below
    // error: assignment to expression with array type
    // str3=strcat(s1,s2);

    // strcpy(str3, strcat(s1, s2));
    // puts(str3);

    printf("the strcmp() of s1 and s2 is : %d\n", strcmp(s1, s2));
    return 0;
}

// strcmp():-------- kuch compiler mein wo ascii value mein difference deta h(but hum realy nhi kr skte)
//                     aur kuch compiler mein wo:--------
//                     agar string match kre:-----------------
//                            to zero as output value dega
//                     agar string match na kre:-------------------
//                           agar pehle wla ka first char ka Ascii Dushre walle ka first char ka Ascii se km hai-- negative
//                            agar pehle wla ka first char ka Ascii Dushre walle ka first char ka Ascii se bda hai-- positive
