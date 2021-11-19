#include <stdio.h>
int main()
{
    printf("this is about switch case statement in c programming\n");
    int age;
    int marks;
    printf("Enter your age : ");
    scanf("%d", &age);
    printf("Enter your marks : ");
    scanf("%d", &marks);

    // example containing the nested switch also
    switch (age)
    {
    case 3:
        printf("The age is 3\n");
        switch (marks)
        {
        case 45:
            printf("your marks are 45\n");
            break;

        default:
            printf("your marks is not 45\n");
            break;
        }
        break;
    case 13:
        printf("The age is 13");
        break;
    case 23:
        printf("The age is 23");
        break;

    default:
        printf("Age is not 3, 13,23 ....");
        break;
    }

    return 0;
}

// note:----- agar switch case mein break nhi lagayege to wo tb tk chlte jaayega jb tk usko break nhi milta hai aur agr khi break
//             Nhi hai to default tk chla jaayega(vvi)