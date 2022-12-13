#include<stdio.h>

int main()
{
    int i, sum=0,num;

    printf("Enter the Number: ");
    scanf("%d",&num);

    for(int i=2; i<=num ; i = i+2)
    {
        sum = sum + i;
    }

    printf("Sum of first %d even numbers are: %d", num,sum);
    return 0;
}