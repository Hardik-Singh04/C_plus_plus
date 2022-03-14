# include <bits/stdc++.h>
using namespace std;

void find(int num)
{
    int rem=0,sq,sum=0;
    sq=num*num;

    while(sq>0)
    {
        rem=sq%10;
        sum=sum+rem;
        sq=sq/10;
    }
    if(sum==num)
    {
        cout << "Niven Number."<<endl;
    }
    else
    {
        cout << " Not a Niven Number."<<endl;
    }
}
int main()
{
    int num;
	
    cout << " Input a number: ";
    cin >> num;
    find(num);
}
