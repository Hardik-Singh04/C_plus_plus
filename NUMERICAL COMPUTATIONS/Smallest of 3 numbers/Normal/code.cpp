#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter three numbers :";
    cin>>a>>b>>c;

    if(a<b && b<c)
    {
        cout<<a<<" is smallest."<<endl;
    }
    else if(b<c && c<a)
    {
        cout<<b<<" is smallest."<<endl;
    }
    else if(c<a && a<b)
    {
        cout<<c<<" is smallest."<<endl;
    }

    return 0;
}
