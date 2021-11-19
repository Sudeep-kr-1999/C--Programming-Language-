#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void printStr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c\n", str[i]);
        i++;
    }
}
int main()
{
    printf("It is about String in C progrmming\n");

    // note:------ agar "endline character" nhi lagayege to print krte time character print krne ke baad kuch garbage value
    //             bhi print krega which we donot want since compiler ko pta nhi pada ki wha pr terminate krna h but error nhi
    //             aayega ( without null character is is invalid string);
    // char str[] = {'h', 'a', 'r', 'r', 'y'};
    char str1[] = {'h', 'a', 'r', 'r', 'y', '\0'};

    // compiler by default null character insert kr deta hai is case mein (vvi)
    char str2[] = "harry";

    // note:---------- the size here is 6 ----> 5 for the characters and 1 for the null character
    printf("the length of string 1is : %d\n", (sizeof(str1) / sizeof(char)));
    printf("the length of string 2 is : %d\n", (sizeof(str2) / sizeof(char)));
    printf("the length of string 2 is : %d\n", strlen(str2));
    // printStr(str2);
    // printStr(str1);

    // -----------------------------------------------------------------------------------------------------------
    // getting string from the user
    char str3[34];

    // it will take the input with spaces also
    gets(str3);

    // it will print the whole string with spaces
    printf(" Using printf %s\n", str3);

    // it will print the whole string with spaces
    printf("using puts : ");
    puts(str3);

    // note:-------- scanf() ki use se bhi hum input le skte hai but hum spaces cover nhi kr paayege(vvi) so it is recommended
    //                 to use gets() and puts() in case of strings
    return 0;
}

// note:--string ko represent krne ke liye size (no of characters+1) hona chahiye because wo "+1" null character ('\0') ke liye
//         hota hai jo string length mein count hota h