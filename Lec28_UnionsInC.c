#include <stdio.h>
#include <string.h>
// struct Student
// {
//     int id;
//     int marks;
//     char fav_char;
//     char name[34];
// };

union Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};
int main()
{
    printf("this is about union in c programming\n");
    union Student s1, s2;
    s1.id = 1;
    s1.marks = 45;
    s1.fav_char = 'u';
    strcpy(s1.name, "harry");

    //note:------ in case of union since hum shared storage use kr rhe hai to ek baar mein (at a time )ek hi shi rhega baaki sb
    //  corrupt ho jaayegge
    printf("the id of s1 is : %d\n", s1.id);
    printf("the marks of s1 is : %d\n", s1.marks);
    printf("the fav_char of s1 is : %c\n", s1.fav_char);
    printf("the name of s1 is : %s\n", s1.name);
    return 0;
}

// note:---------- structure and union are similar with some differences