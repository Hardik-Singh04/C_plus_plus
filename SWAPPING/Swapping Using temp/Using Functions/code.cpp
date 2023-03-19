#include<iostream>
using namespace std;

void swap(int a, int b)
{
    int temp;
    
    temp=a;
    a=b;
    b=temp;
    
    cout<<"Value of a after swapping is :"<<a<<endl;
    cout<<"Value of b after swapping is :"<<b<<endl;
}
int main()
{
    int a,b;
    cout<<"Enter three numbers :";
    cin>>a>>b;

    cout<<"Value of a before swapping is :"<<a<<endl;
    cout<<"Value of b before swapping is :"<<b<<endl<<endl;

    swap(a,b);

    return 0;
}
