#include <stdio.h>
int main()
{

    // note:------------ (m1xn1) matrix multiplied by (m2xn2) matrix give (m1xn2) matrix only if n1=m2 otherwise multiplication
    //                     not possible
    printf("this is about matrix multiplicaiton in c programming\n");
    int m, n, sum = 0;
    int a[3][4], b[4][2], result[3][2];
    printf("enter your first matrix : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("enter the ( %d , %d ) element of first matrix : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("enter your second matrix : \n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("enter the ( %d , %d ) element of second matrix : ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("the resultant matrix is : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                sum += a[i][k] * b[k][j];
                result[i][j] = sum;
                sum = 0;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("the ( %d , %d ) element of resultant matrix : %d \n", i, j, result[i][j]);
        }
    }

    return 0;
}