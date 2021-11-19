#include <stdio.h>
int main()
{
    printf("this is the exercise of multiplication table in the c programming\n");
    int n;
    printf("enter the number for which you want to print the table : ");
    scanf("%d", &n);
    printf("the table of %d is :\n", n);
    printf("%d x 1= %d\n", n, n * 1);
    printf("%d x 2= %d\n", n, n * 2);
    printf("%d x 3= %d\n", n, n * 3);
    printf("%d x 4= %d\n", n, n * 4);
    printf("%d x 5= %d\n", n, n * 5);
    printf("%d x 6= %d\n", n, n * 6);
    printf("%d x 7= %d\n", n, n * 7);
    printf("%d x 8= %d\n", n, n * 8);
    printf("%d x 9= %d\n", n, n * 9);
    printf("%d x 10= %d\n", n, n * 10);
    return 0;
}

// question:
// print the multiplicaiton table for the number entered by the user in pretty _get_output_format

// example:
// enter the number you want multiplication table of