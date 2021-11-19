#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    printf("command line calculator in c programming\n");
    char *operation;
    int num1, num2;
    operation = argv[1];
    num1 = atoi(argv[2]);
    num2 = atoi(argv[3]);

    // atoi():------ convert a string into an integer
    // int atoi(const char *str):------ str is a string represent of an integral number
    // printf("the operation is : %s\n", operation);
    // printf("the num1 value is :%d\n", num1);
    // printf("the num2 value is :%d\n", num2);

    if (strcmp(operation, "add") == 0)
    {
        printf("%d\n", num1 + num2);
    }

    else if (strcmp(operation, "substract") == 0)
    {
        printf("%d\n", num1 - num2);
    }

    else if (strcmp(operation, "multiply") == 0)
    {
        printf("%d\n", num1 * num2);
    }

    else if (strcmp(operation, "divide") == 0)
    {
        printf("%d\n", num1 / num2);
    }
    else
    {
        printf("please give a valid operation\n");
    }
    return 0;
}

// note:----- we have to create a command line calculator to add/substract/divide/multiply two numbers
//             first commandline argument of your c program must be the operation
//             the next arguments being the two numbers
//             ex:----- command.c add 3 4
//             >> 7
