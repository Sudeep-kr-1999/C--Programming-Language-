#include <stdio.h>
int main()
{
    printf("this is about goto statement in c programming\n");

    // ----------------------------------------------------------------------------------------------------------------------
    // note:--------------- this code will go to infinite times because jitne baar hum label mein aayege utni baar goto mein jaayega aur
    //                         ye loop chlta rhega

    // label:
    //     printf("we are inside label \n");
    //     printf(" we are outside label");
    //     goto label;

    // ----------------------------------------------------------------------------------------------------------------------

    // note:---------- since end ke baad koi goto nhi h to infinite times mein nhi jaayega(vvi)
    // label:
    //     printf("we are inside the label\n");
    //     goto end;
    //     printf("we are outside the label\n");
    //     goto label;

    // end:
    //     printf("we are inside the end block");

    // ----------------------------------------------------------------------------------------------------------------------

    int num;
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n", i);
        for (int j = 0; j < 8; j++)
        {
            printf("Enter the number , Enter 0 to exit : ");
            scanf("%d", &num);
            if (num == 0)
            {
                goto end;
            }
        }
    }

end:
    printf("you are outside all the loops above\n");
    return 0;
}
// note:----------- goto,break and continue statements is also called a jump statements
// note:----------- generally goto ka use nhi krte but hume agar ek statement ka use krke saare nested loops se baahr aana hai to
// in that case hum goto ka effectively use kr skte h
