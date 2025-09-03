#include <iostream>

using namespace std;
int main()
{
    string ab="dsjnads";
    string abc;
    cout<<ab;
    
    cout<< "\nenter\n";
    cin >> abc;
    cout << abc;
    cout <<"\n2nd index ="<<abc[1];
    abc=abc+"  " +abc;
    cout <<"\nnew = "<<abc;
    abc.append("  meow");

    cout <<"\nnew = "<<abc;

    for (int i =0;i<5;i++)
    {
        cout <<"i="<<i<<"th\n";
    }
// substr
string sub=abc.substr(3,2);
cout<<"\nsub\n";
cout << sub;
}