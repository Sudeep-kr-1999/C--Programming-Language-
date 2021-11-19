#include <stdio.h>
int main()
{
    printf("this is about if else control statement\n");
    int age;
    printf("Enter your age : ");
    scanf("%d", &age);
    printf("you have entered %d as your age\n", age);
    if (age >= 18)
    {
        printf("you can vote\n");
    }
    else if (age > 10)
    {
        printf("you are between 10 to 18 and you can vote for kids\n");
    }

    else if (age >= 3)
    {
        printf("you are between 3 to 10 and you can vote for babies\n");
    }
    else
    {
        printf("you cannot vote\n");
    }

    return 0;
}
