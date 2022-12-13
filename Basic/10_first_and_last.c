#include<stdio.h>
int main(){
    int i,first,last,n;
    
    printf("Enter the number: ");
    scanf("%d",&n);
    last = n % 10;

    while(n>=10)
    {
        n = n/10;
    }

    first = n;

printf("First no is %d and last no is %d:", first,last);
    return 0;
}