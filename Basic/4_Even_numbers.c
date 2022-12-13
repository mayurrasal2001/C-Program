// #include<stdio.h>
// int main(){
//     int i;

//     printf("Even Numbers from 1 to 100 are: ");
//     int n=100;
//     for(i = 0; i<n ; i =i + 2)
//     {
//         printf("%d\n",i);
//     }
// return 0;
// }

#include<stdio.h>
int main(){
    int i=2;
    printf("Even numbers from 1 to 100 are: ");
    int n = 100;
    while(i<=n)
    {
        printf("%d\n",i);
        i = i + 2;
    }
return 0;
}