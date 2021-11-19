#include <stdio.h>
#include <string.h>
// struct student
// {
//     int id;
//     int marks;
//     char fav_char;
//     char name[34];
// };

// here we can make the object alongwith the structure also (vvi)
struct student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} harry, ravi, shubham;

// we can also make it as global variable
//  struct student harry, ravi, shubham;
int main()
{
    printf("this is about structure in c programming\n");
    // struct student harry, ravi, shubham;
    harry.id = 1;
    ravi.id = 2;
    shubham.id = 3;
    ravi.marks = 466;
    harry.marks = 469;
    shubham.marks = 456;
    ravi.fav_char = 'a';
    harry.fav_char = 'b';
    shubham.fav_char = 'c';
    printf("harry got %d marks having id %d and fav_char %c\n", harry.marks, harry.id, harry.fav_char);
    printf("ravi got %d marks having id %d and fav_char %c\n", ravi.marks, ravi.id, ravi.fav_char);
    printf("shubham got %d marks having id %d and fav_char %c\n", shubham.marks, shubham.id, shubham.fav_char);
    strcpy(harry.name, "harry potter student of the year");
    printf("the name of the harry is : %s\n", harry.name);

    return 0;
}

// note:-------in c programming all the member variable  of the structure is public and also we cannot have any member function
// inside structure in case of c programming

// but in case of c++ the member variable of structure is still public but here we can have member function
// inside the structure in case of c++ programming

// note:------ (.) dot operator is also called structure member operator