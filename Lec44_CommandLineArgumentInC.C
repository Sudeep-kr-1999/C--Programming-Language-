#include <stdio.h>

// note:---here in int main() the parameters int argc and char const *argv[] is used in command line argument in c programming
// int argc:---- yha pr total number of command line argument ka count aayega including programme name
//  char const *argv[]:------ yha pr *argv[] ke har index pe saare argument store hoge including programme name in
//                             the 0th index

// for ex:---------- prog.exe harry code
// then here total number of argument is 3 (prog.exe,harry,code) so argc=3
// and *argv[]={prog.exe,harry,code} array of length 3

// above explained way mein sb chlte jaayege........................

// note:----- if no argument is passed there is just programme name isliye argc =1 and argv[] ke first pointer mein program
//             name.....!

int main(int argc, char const *argv[])
{
    printf("this is about commandline argument in c programming\n");
    printf("the value of argc is %d\n", argc);
    for (int i = 0; i < argc; i++)
    {
        printf("this argument at index number %d has value of : %s\n", i, argv[i]);
    }
    return 0;
}
