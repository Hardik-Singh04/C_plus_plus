#include<iostream>
using namespace std;

void small(int a,int b)
{   
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
}
int main()
{
    int a,b;
    cout<<"Enter two numbers :";
    cin>>a>>b;
    small(a,b);
    return 0;
}
