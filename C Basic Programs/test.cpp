#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            if(i<=j)
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }
    cout<<endl;


for(int i=0;i<6;i++)
{
    for(int j=0;j<6;j++)
    {
        if(i>=j)
        {
            cout<<"*";
        }
    }
    cout<<endl;
}

cout<<endl;

for(int i=0;i<6;i++)
{
    for(int j=0;j<6;j++)
    {
        if(j<i)
        {
            cout<<" ";
        }
        else
        {
            cout<<"*";
        }
    }
    cout<<endl;
}

for(int i=0;i<6;i++)
{
    for(int j=0;j<6;j++)
    {
        if(j<6-i)
        {
            cout<<" ";
        }
        else
        {
            cout<<"*";
        }
    }
    cout<<endl;
}
return 0;
}