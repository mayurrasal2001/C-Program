// #include<stdio.h>

// int main()
// {
//     char i;
//     printf("Alphabets from A to Z are: \n");
//     for(char i= 'A'; i<='Z'; i++)
//     {
//         printf("%c \n", i);
//     }
//     return 0;
// }


#include<stdio.h>

int main()
{
    char i;
    printf("Alphabets from A to Z are: \n");
    i = 'A';
    while(i<='Z')
    {
        printf("%c \n",i);
        i++;
    }

    return 0;
}