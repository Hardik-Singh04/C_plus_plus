#include<iostream>
using namespace std;

int main()
{
    float total_marks,a,b,c,d,e;
    cout<<"Enter total marks : ";
    cin>>total_marks;
    cout<<"Enter marks of five subjects :"<<endl;
    cin>>a>>b>>c>>d>>e;

    float percentage = ((a+b+c+d+e)/total_marks) * 100;
    cout<<"Percentage is :"<<percentage<<endl;
    return 0;
}
