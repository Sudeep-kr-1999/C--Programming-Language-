#include <stdio.h>
int main()
{
    printf("this is about file input and output functions n c programing\n");
    FILE *ptr = NULL;
    char string[34];
    char string1[64] = "this content was produced by tutorial file handling";

    // *******************reading a file*********************
    // ptr = fopen("Lec42Asample.txt", "r");
    // // whitespace ya end line aane se aage read nhi krta h (vvi)
    // fscanf(ptr, "%s", string);
    // printf("the content of this file has : %s\n", string);

    // ************ writing a file ********************************
    // note:------- write mode pr pura content pehle wla hat jaayega aur suru se write hoga
    // ptr=fopen("Lec42Asample.txt", "w");
    // fprintf(ptr,"%s",string1);

    // ************appending in a file ********************************
    // note:------- append krne se purane data ke baad append kr dega
    ptr = fopen("Lec42Asample.txt", "a");
    fprintf(ptr, "%s", string1);
    return 0;
}