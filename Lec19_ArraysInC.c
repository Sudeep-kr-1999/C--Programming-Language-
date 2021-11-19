#include <stdio.h>
int main()
{
    printf("this is about array in c programming\n");
    // int marks[4];
    // marks[0] = 34;
    // printf("marks of student 1 is : %d\n", marks[0]);
    // marks[0] = 454;
    // marks[1] = 454;
    // marks[2] = 454;
    // marks[3] = 454;
    // printf("marks of student 1 is : %d\n", marks[0]);
    // printf("marks of student 2 is : %d\n", marks[1]);
    // printf("marks of student 3 is : %d\n", marks[2]);
    // printf("marks of student 4 is : %d\n", marks[3]);

    // for(int i=0;i<4;i++){
    //     printf("enter the value of %d student : ",i+1);
    //     scanf("%d",&marks[i]);
    //     printf("the marks of %d is %d\n",i+1,marks[i]);
    // }

    // note:------- in one dimensional array size khud hi le leta hai agr hum chahe to assign kre n to chor skte h
    // int marks[]={54,12,34,55};
    // int marks[4]={54,12,34,55};

    // very very important note
    // note:--but in 2 d array hume at least nested wale array ka size mention krna hoga since jagged list direct nhi bn skta h

    // for 2 d arrays in c programming:---------------------------------------

    // note:------ both the ways are correct .................!
    int marks[][4] = {{45, 234, 2, 3}, {3, 2, 3, 3}};
    // int marks[2][4] = {{45, 234, 2, 3}, {3, 2, 3, 3}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("the value is %d: ", marks[i][j]);
        }
    }

    return 0;
}

// note:------- since array is mutable so we can change the value of any element in the array