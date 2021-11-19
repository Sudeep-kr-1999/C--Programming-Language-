#include <stdio.h>

// this is the function prototype
int sum(int, int);

void printstar(int n)
{
    int i = 0;
    while (i < n)
    {
        printf("*");
        i++;
    }
}

int takenumber()
{
    int i;
    printf("enter the number : ");
    scanf("%d", &i);
    return i;
}
int main()

{
    printf("this is about funcitons in c programming");
    int a;
    int b;
    a = 9;
    b = 87;
    int c = sum(a, b);
    printf("the sum is : %d\n", c);
    printstar(7);
    int d = takenumber();
    printf("%d", d);
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}