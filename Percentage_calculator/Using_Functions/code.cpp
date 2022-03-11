#include<iostream>
using namespace std;
float calculate(float total_marks,float a,float b,float c,float d,float e)
{
    float percentage = ((a+b+c+d+e)/total_marks) * 100;
    return percentage;
}
int main()
{
    float total_marks,a,b,c,d,e;

    cout<<"Enter total marks : ";
    cin>>total_marks;
    cout<<"Enter marks of five subjects :"<<endl;
    cin>>a>>b>>c>>d>>e;

    float percentage = calculate(total_marks,a,b,c,d,e);
    cout<<"Percentage is :"<<percentage<<endl;
    return 0;
}
