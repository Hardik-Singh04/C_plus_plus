#include<iostream>
using namespace std;

int factorial(int num)
{
    int fact=1;
    for(int i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
  int num = 0,fact;
  cout<<"Enter number to find factorial :";
  cin>>num;
  fact=factorial(num);

  cout<<"The factorial is :"<<fact<<endl;
}
