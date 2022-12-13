#include<iostream>
using namespace std;

int pyramid(int n)
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
    int n=5;
    cout<<pyramid(n);

return 0;
}