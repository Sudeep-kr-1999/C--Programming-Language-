#include <stdio.h>
int main()
{
    printf("this is about break and continue statements in c programming\n");

    // note:---------- jis loop ke andr ho us loop se baahr aa jaoge ( using break statement) (very very imp)
    int i, age;
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", i);
        printf("Enter your age : ");
        scanf("%d", &age);
        // if (age > 10)
        // {
        //     break;
        // }

        if (age > 10)
        {
            continue;
        }

        printf("we have not come across any continue statement\n");
    }
    return 0;
}

// note:--- if we use continue in for loops:--- to condition update krke continue krega
//         but in while or do while it depends where we write continue if we write after update statement then it will update and then continue
//         and if we write that before update statement then it will continue without updation