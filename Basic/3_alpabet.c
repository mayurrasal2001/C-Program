// #include<stdio.h>
// int main(){
//     char i;
//     printf("Alphabet from A to Z are: ");

//     i = 'A';
//     for(i = 'A'; i<='Z';i++)
//     {
//         printf("%c\n",i);
//     }
// return 0;
// }

#include<stdio.h>
int main(){
    char i;
    i = 'Z';

    while(i>='A')
    {
        printf("%c\n",i);
        i--;
    }
return 0;
}