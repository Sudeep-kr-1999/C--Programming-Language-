#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("this is about memory leak in c programming\n");
    int a, i = 0;
    int *i2;
    while (i < 4555)
    {
        printf("welcome to code with harry\n");
        i2 = malloc(34444 * sizeof(int));
        if (i % 100 == 0)
        {
            getchar();
        }
        i++;
        // note:--------- agar hum memory ko free nhi krege to wo memory lete hi jaayege aur at last memory leak ki situation
        //                 aa jaayegi
        free(i2);
    }
    return 0;
}

// note:---- in languages like python and java there is garbage collector jo ki us memory ko free krte jata hai jise hum free
//            krna bhool jaate hai