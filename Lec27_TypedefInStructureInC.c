#include <stdio.h>
// syntax:------------------------------

// basically variable ko nickname dene ke kaam mein aata hai in leman language.........!
// typedef<previous_name> <alias_name>;

typedef struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} std;
int main()
{
    // this statement means jo pehle unsigned long hua krta tha use ul bna do then hum usee as ul use krege(imp...)
    printf("this is about typedef in structure in c programming\n");
    typedef unsigned long ul;
    typedef int integer;
    integer a = 4;
    printf("the value of a is %d\n", a);
    ul l1, u2, u3;

    // ----------------------------------------------------------------------------------------------------------
    // int *a,b;  -- this does not mean ki humne 2 int pointer bnya hai *a and *b in reality ye ise *a and b ki trah treat krega

    // so for convinence we can use typedef for our ease -----------
    typedef int *intpointer;

    // now this will create the 2 pointer *a and *b of integer type...!
    intpointer a, b;

    // ---------------------------------------------------------------------------------------------------------

    // this is the general way --------
    // struct Student s1, s2;

    // by using typedef keyword:--------------------
    std s1, s2;
    s1.id = 56;
    s2.id = 89;
    printf("the value of s1 id is : %d\n", s1.id);
    printf("the value of s2 id is : %d\n", s2.id);

    return 0;
}