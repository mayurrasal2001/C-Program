#include<stdio.h>

int main()
{
    int n,t, rem, sum=0;

    printf("Enter the Number: ");
    scanf("%d",&n);

    t = n;              //this line we will take for the printing the accurate value in the last printf at the place of the first %d

    while(t > 0)
    {
        rem = t % 10;
        sum = sum + rem;
        t = t/10;
    }

    printf("Sum of the degits of %d: %d",n,sum);

    return 0;
}