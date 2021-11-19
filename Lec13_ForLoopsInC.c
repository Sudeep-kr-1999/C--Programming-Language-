#include <stdio.h>
int main()
{
    printf("this is about for loops in c programming\n");

    // we can use multiple expression in the loop if we want

    int i;
    int j;

    // note:---- agr multiple condition lagaye huye hai "," seprated to last mein jo condition hai useee termination ke liye maana
    //  jaayega baaki ka frk nhi padega for ex:---- below "j" ki condition dekhi jaayegi n ki "i" ki termination ke liye if "j"
    // ki condition achieve ho gyi to terminate ho jaayega chahe fir "i" ki huyi ho ya n huyi ho
    for (i = 0, j = 0; i < 5, j < 2; i++, j++)
    {
        printf("%d", i);
        printf("%d\n", j);
    }

    // note:----------- for loop mein expression 1 lagana zaroori nhi hai kyuki whla pr hum variable ko initialize krtee h
    //                 agr variable pehle se hi initialize hai to hum use blank chor skte h (below example.....)
    int a = 0;
    for (; a < 5; a++)
    {
        printf("%d\n", a);
    }

    return 0;
}