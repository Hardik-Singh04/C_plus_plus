#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter three numbers :";
    cin>>a>>b;

    
    cout<<"Value of a before swapping is :"<<a<<endl;
    cout<<"Value of b before swapping is :"<<b<<endl<<endl;

    a=a+b;
    b=a-b;
    a=a-b;
    
    cout<<"Value of a after swapping is :"<<a<<endl;
    cout<<"Value of b after swapping is :"<<b<<endl;
    

    return 0;
}
