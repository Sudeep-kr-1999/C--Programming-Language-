#include <stdio.h>

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
int main()
{
    int num;
    printf("this is about recursion in c programming\n");
    printf("enter the number to find the factorial of : ");
    scanf("%d", &num);
    int ans = factorial(num);
    printf("the factorial of %d is %d ", num, ans);
    return 0;
}
