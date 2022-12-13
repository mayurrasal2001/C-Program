#include<stdio.h>

int main()
{
    int n;
    int count=0;
    printf("Enter the Number: ");
    scanf("%d",&n);

    while(n > 0)
    {
        n = n/10;
        count++;
    }

    printf("Count of the number is: %d",count);

    return 0;
}