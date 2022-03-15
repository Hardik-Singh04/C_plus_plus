#include <iostream>
using namespace std;
int main()
{
        int ch,a=0,b=0;
        cout<<"1.Circle"<<endl;
        cout<<"2.Rectangle"<<endl;
        cout<<"3.Square"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"Enter your choice :";
        cin>>ch;
        switch(ch)
        {
            case 1:cout<<"Enter radius of circle :";
                cin>>a;
               cout<<"Area of circle : "<<(a*a*3.14);
                break;
            case 2:cout<<"Enter length of rectangle :";
                cout<<"Enter breadth of length :";
                cin>>a;
                cin>>b;
                cout<<"Area of rectangle: "<<(a*b);
                break;
            case 3:cout<<"Enter sides of square :";
                cin>>a;
                cout<<"Area of Square : "<<(a*a);
                break;
            default :cout<<"Wrong Choice.";
        }
}
