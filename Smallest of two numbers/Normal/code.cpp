#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter two numbers :";
    cin>>a>>b;

    if(a<b)
    {
        cout<<a<<" is smallest."<<endl;
    }
    else if(a>b)
    {
        cout<<b<<" is smallest."<<endl;
    }
    else
    {
        cout<<"Both are equal."<<endl;
    }

    return 0;
}
