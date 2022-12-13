#include<stdio.h>

int main()
{
    char ch='a';
    printf("ASCII Value from A to Z are:\n");

    while(ch<='z')
    {
        printf("%c=%d\n",ch,ch);
        ch++;
    }
}