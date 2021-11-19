#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("this is about various functions related to dynamic memory allocation in c programming\n");

    // use of malloc:----------------
    // by defult memory garbage value contain krega

    // int size;
    // printf("enter the size of the array you want to create : ");
    // scanf("%d",&size);
    // int *ptr;
    // ptr = (int *)malloc(size * sizeof(int));
    // for (int i = 0; i <size; i++)
    // {
    //     printf("enter the value of %d element of this array : ",i);
    //     scanf("%d", &ptr[i]);
    // }

    // // note:------agr hum size se jyda array value ko access krne ki koshish krege to garbage value dega
    // for (int i = 0; i < size; i++)
    // {
    //     printf("the value of %d element of this array is : %d\n",i,ptr[i]);
    // }

    // --------------------------------------------------------------------------------------------------

    // use of calloc ----------------------------------------------------
    // by default memory  mein value 0 contain krega.......(vvi)

    int size;
    printf("enter the size of the array you want to create : ");
    scanf("%d", &size);
    int *ptr;
    ptr = (int *)calloc(size, sizeof(int));
    // for (int i = 0; i < size; i++)
    // {
    //     printf("enter the value of %d element of this array : ", i);
    //     scanf("%d", &ptr[i]);
    // }

    // // note:------agr hum size se jyda array value ko access krne ki koshish krege to garbage value dega
    // for (int i = 0; i < size; i++)
    // {
    //     printf("the value of %d element of this array is : %d\n", i, ptr[i]);
    // }

    // ----------------------------------------------------------------------------------------------
    // use of realloc:--------------------------------------------------------
    // by default memory mein value garbage contain krega -----
    int size1;
    printf("enter the size of the new array you want to create : ");
    scanf("%d", &size1);
    ptr = (int *)realloc(ptr, size1 * sizeof(int));
    // for (int i = 0; i < size1; i++)
    // {
    //     printf("enter the value of %d element of this new array : ", i);
    //     scanf("%d", &ptr[i]);
    // }

    // note:------agr hum size se jyda array value ko access krne ki koshish krege to garbage value dega
    for (int i = 0; i < size1; i++)
    {
        printf("the new value of %d element of this new array is : %d\n", i, ptr[i]);
    }

    // to free the memory
    free(ptr);
    return 0;
}

// note:--------- there are 4 functions used in dynamic memory allocation in c programming:----
// 1. calloc : it stand for contiguous allocation
// 2. malloc : malloc stand for memory allocation
// 3. realloc
// 4. free
