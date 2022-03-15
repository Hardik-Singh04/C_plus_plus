#include <iostream>
using namespace std;

int main()
{
        int ch,a=0,b=0;
        cout<<"Enter your choice :";
        cin>>ch;

        switch(ch)
        {
            case 1:
                cout<<"Enter 2 numbers :"<<endl;
                cin>>a>>b;
                cout<<"Add :"<<(a+b);
                break;
            case 2:
                cout<<"Enter 2 numbers :"<<endl;
                cin>>a>>b;
                if(a>b)
                {
                    cout<<"Subtract (a-b) :"<<(a-b);
                }
                else
                {
                    cout<<"Subtract (b-a) :"<<(b-a);
                }
                break;
            case 3:
                cout<<"Enter 2 numbers :"<<endl;
                cin>>a>>b;
                cout<<"Multiply :"<<(a*b);
                break;
            case 4:
                cout<<"Enter 2 numbers :"<<endl;
                cin>>a>>b;
                cout<<"Divide :"<<(a/b);
                break;
            case 5:
                cout<<"Enter 2 numbers :"<<endl;
                cin>>a>>b;
                cout<<"Modulus :"<<(a%b);
                break;
            default :cout<<"Wrong Choice.";
        }
}
