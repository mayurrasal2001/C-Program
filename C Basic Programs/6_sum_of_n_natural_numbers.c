#include<stdio.h>

int main()
{
    int i, sum=0, num;
    printf("Enter the Number: ");
    scanf("%d ", &num);

    for(int i=1; i<=num ; i++)
    {
        sum = sum + i;
    }

    printf("Sum of first %d natural Number is: %d ", num,sum);

    return 0;
}