
// #include<stdio.h>
//using for
// int main()
// {
//     printf("Natural Numbers from 50 to 1 are: \n");
//     for(int i=50; i>=1; i--)
//     {
//         printf("%d \n",i);
//     }
// }

//USING WHILE LOOP
#include<stdio.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    while(n>=1)
    {
        printf("%d\n", n);
        n--;
    }

    return 0;
}