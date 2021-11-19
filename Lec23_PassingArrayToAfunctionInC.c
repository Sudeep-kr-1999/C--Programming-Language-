#include <stdio.h>

// note:----------- agar hum function ke andar array element ke value ko change krte hai to original array bhi change hota h
//                     because function mein array pointer bn ke jaata h ultimately( array is mutable)
int func1(int array[])
{

    // note:----- here sizeof(array) is 4 becuae jb hum aisa krte hai to ye array ka base address leta hai(or point krta h) in this case
    // base address ek int type hai isliye integer ka size 4 hai isliye agar hume size ki zaroorat hoti hai to use alag se function call ke time
    // pass kr dete h

    // very very important logic
    // note:--------- here sizeof(array) showing the size of the base address of the array not the whole array.
    printf("the size of base address of the array is :%d \n", sizeof(array));

    for (int i = 0; i < 7; i++)
    {
        printf("the value of array %d is : %d \n", i, array[i]);
    }
    array[0] = 382;

    return 0;
}

int func2(int *ptr)
{
    // note:--------------- ye (ptr) ka size print krega jo ki jo ki base address hai having size of int= 4....
    printf("the size of  ptr is : %d\n", sizeof(ptr));
    for (int i = 0; i < 7; i++)
    {

        // both are the ways to print the values
        printf("the value of array %d is : %d \n", i, ptr[i]);
        printf("the value of array %d is : %d \n", i, *(ptr + i));
    }
    *(ptr + 2) = 6534;
    return 0;
}

int func3(int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("the value at ( %d , %d ) is : %d\n", i, j, arr[i][j]);
        }
    }

    return 0;
}
int main()
{
    printf("this is about passing arrays in function in c programming\n");
    int arr[] = {23, 13, 3, 4, 5, 7, 9};
    int arr2[][2] = {{9, 3}, {2, 13}};
    // note:-------- here sizeof(arr) is 16
    printf("size of array is : %d\n", sizeof(arr));
    func1(arr);
    func2(arr);
    func3(arr2);
    return 0;
}

// note:------------ generally hum function call ke samay array ke saath uska size bhi pass kr dete hai kyuki function mein jaakr
//                     size nikalna thora muskil hota h but it's not compulsary it just for our ease ........!
// like fun(arr,size);
// int fun(int arr[],int size);
// int fun(int *ptr,int size)