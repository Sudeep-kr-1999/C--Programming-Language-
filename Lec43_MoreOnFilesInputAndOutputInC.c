#include <stdio.h>
int main()
{
    printf("this is about more in input and output in c programming like fgets, fputs, fgetc, fputc and more..\n");
    printf("the important notes are in the screenshots in the directory\n");
    FILE *ptr = NULL;
    ptr = fopen("Lec43_Myfile.txt", "w");

    // ---------------------------------------------------------------------------------------------------------------------
    // fgetc():-----------

    // note :----------- jitni baar fgetc() function chalayege utna baar ek ek next character read krte jaayega
    // char c=fgetc(ptr);
    // printf("the character i read for the first time was : %c\n",c);
    // c=fgetc(ptr);
    // printf("the character i read for the second time was : %c\n",c);
    // fclose(ptr);

    // ----------------------------------------------------------------------------------------------------------------
    // fgets():--------

    // char str[34];

    // // note:------- fgets() take 3 argument :----
    // //             1. kis string mein readed string store krna h
    // //             2. kitna length ka string reaed krna h (including null character)
    // //                 note:----- if there is length 3 to starting ka 2 character read krega 1 null character ke liye hoga
    // //             3. kis file pointer se string read krna h
    // fgets(str, 3, ptr);
    // printf("The string read first time is : %s\n", str);

    // ----------------------------------------------------------------------------------------------------------------
    // fputc():-------

    // saare file content ko udakr direct 'o' lga dega if open in only write mode("w")
    // fputc('o',ptr);

    // ----------------------------------------------------------------------------------------------------------------
    // fputs():------
    // saare file content ko udakr direct given string daal dega if open in only write mode("w")
    fputs("This is harry", ptr);
    return 0;
}

// note:-------- in r+ mode jo bhi hum likhege wo staring se write ho jaayega aur jo pehle se tha wo baad mein aa jaayega
//                w+ puri file khali kr ke data add krega