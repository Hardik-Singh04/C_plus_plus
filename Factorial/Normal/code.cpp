#include<iostream>
using namespace std;

int main()
{
    int num = 0,fact=1;
    cout<<"Enter number to find factorial :";
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    cout<<"The factorial is :"<<fact<<endl;
    return 0;
}
