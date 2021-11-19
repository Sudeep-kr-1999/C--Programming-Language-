#include <stdio.h>
int main()
{
    printf("this is about array and pointer arithmatic in c programming\n");
    int a = 34;
    int *ptra = &a;

    // this will print the address in the integer format
    printf("the address of a is : %d\n", ptra);

    // since it is a integer pointer and in this computer "int " take 4 bytes so it move 4 bytes forward with each increment
    // if character pointer hota to har unit increment pr 1 byte lega

    // note:------- agr hum kisi aise memory location pr jaate hai jaha kuch h hi nhi aur wha value find krne ki koshish krte hai
    //                 to woh error throw krta h
    printf("%d", ptra + 1);

    // ------------------------------------------------------------------------------------------------------------

    int arr[] = {1, 2, 3, 4, 5, 6, 67};
    printf("value at the position 3 of the array is : %d\n", arr[3]);
    printf("address of the first element of the array : %d\n", &arr[0]);
    printf("address of the first element of the array : %d\n", arr);
    printf("the address of the second element of the array :%d\n", &arr[1]);
    printf("the address of the second element of the array :%d\n", arr + 1);

    printf("value at address of the first element of the array : %d\n", arr[0]);
    printf("value at address of the first element of the array : %d\n", *arr);
    printf("value at the address of the second element of the array :%d\n", arr[1]);
    printf("value at the address of the second element of the array :%d\n", *(arr + 1));

    // note:---- if we do arr++ or ++arr this will give error because arr ek constant pointer hai jo khi change nhi hoga wo
    //             hamesha first element ko hi point krta rhega but agar hum

    //             int * ptr=arr;
    //             krke ptr ko aage bhadaye to koi error nhi aayega since ptr ek constant pointer nhi h

    return 0;
}

// the operation allowed in pointer arithmatic is :-------

// ++
// --
// +
// -