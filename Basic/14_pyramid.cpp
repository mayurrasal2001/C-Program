#include<iostream>
using namespace std;
void pyramid(int n)
{
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=i;j++)
    {
        cout<<"*";
    }
    cout<<"\n";

}
}
int main(){
    int n=100;
    pyramid(n);
    return 0;
}