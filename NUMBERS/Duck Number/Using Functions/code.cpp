# include <bits/stdc++.h>
using namespace std;

void find(int num)
{
    int temp,r,flg=0;
    temp=num;
    while(num>0)
        {
            if(num % 10 == 0)
            {
            flg=1;
            break;
            }
			num/=10;
        }
            if(temp>0 && flg==1)
            {
            cout << "Duck Number."<<endl;
            }
            else
            {
            cout << " Not a Duck Number."<<endl;
            }
}
int main()
{
    int num;
	
    cout << " Input a number: ";
    cin >> num;
    find(num);
}
