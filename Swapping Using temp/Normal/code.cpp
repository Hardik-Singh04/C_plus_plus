#include<iostream>
using namespace std;

int main()
{
    int a,b,temp;
    cout<<"Enter three numbers :";
    cin>>a>>b;

    
    cout<<"Value of a before swapping is :"<<a<<endl;
    cout<<"Value of b before swapping is :"<<b<<endl<<endl;

    temp=a;
    a=b;
    b=temp;
    
    cout<<"Value of a after swapping is :"<<a<<endl;
    cout<<"Value of b after swapping is :"<<b<<endl;
    

    return 0;
}
