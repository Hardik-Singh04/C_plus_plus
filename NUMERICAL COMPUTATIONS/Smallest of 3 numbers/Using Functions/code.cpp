#include<iostream>
using namespace std;

void smallest(int a,int b,int c)
{   
    if(a<b && a<c)
    {
        cout<<a<<" is smallest."<<endl;
    }
    else if(b<c && b<a)
    {
        cout<<b<<" is smallest."<<endl;
    }
    else if(c<a && c<b)
    {
        cout<<c<<" is smallest."<<endl;
    }
}
int main()
{
    int d,e,f;
    cout<<"Enter three numbers :";
    cin>>d>>e>>f;
    smallest(d,e,f);
    return 0;
}
