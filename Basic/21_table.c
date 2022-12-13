#include<stdio.h>
int main(){
    int n;

    printf("Enter the number ");
    scanf("%d",&n);

    while(n>0)
    {
        n = n % 10;
        printf("%d",n);
        n = n / 10;
    }





return 0;
}