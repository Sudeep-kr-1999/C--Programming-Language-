#include <stdio.h>
int main()
{
    int num;
    int index = 0;
    printf("this is about do while loops in c programming\n");
    printf("Enter a number : ");
    scanf("%d", &num);
    do
    {
        printf("%d\n", index);
        index++;
    } while (index < num);

    return 0;
}

// note:---------- do while loop definitely execute at least once irrespective of whaterver the condition is....!