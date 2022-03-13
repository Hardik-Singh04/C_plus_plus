#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter three numbers :";
    cin>>a>>b>>c;

    if(a>b && b>c)
    {
        cout<<a<<" is largest."<<endl;
    }
    else if(b>c && c>a)
    {
        cout<<b<<" is largest."<<endl;
    }
    else if(c>b && b>a)
    {
        cout<<c<<" is largest."<<endl;
    }

    return 0;
}
