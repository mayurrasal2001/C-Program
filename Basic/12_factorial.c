#include<stdio.h>
int main(){
    int n;
    int fact = 1;

    printf("Factorial of the number is: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        fact = fact * i;
    }
    printf("Factorial of the number %d is %d: ", n,fact);
    return 0;
}