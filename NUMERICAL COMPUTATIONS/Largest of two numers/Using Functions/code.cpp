#include<iostream>
using namespace std;

void large(int a,int b)
{   
    if(a>b)
    {
        cout<<a<<" is largest."<<endl;
    }
    else if(a<b)
    {
        cout<<b<<" is largest."<<endl;
    }
    else
    {
        cout<<"Both are equal."<<endl;
    }
}
int main()
{
    int a,b;
    cout<<"Enter two numbers :";
    cin>>a>>b;
    large(a,b);
    return 0;
}
