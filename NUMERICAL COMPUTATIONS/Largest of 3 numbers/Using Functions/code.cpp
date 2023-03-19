#include<iostream>
using namespace std;

void largest(int a,int b,int c)
{   
    if(a>b && b>c)
    {
        cout<<a<<" is largest."<<endl;
    }
    else if(b>c && c>a)
    {
        cout<<b<<" is largest."<<endl;
    }
    else if(c>a && a>b)
    {
        cout<<c<<" is largest."<<endl;
    }
}
int main()
{
    int a,b,c;
    cout<<"Enter three numbers :";
    cin>>a>>b>>c;
    largest(a,b,c);
    return 0;
}
