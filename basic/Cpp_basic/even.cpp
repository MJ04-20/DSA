#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // if (n%2==0)
    // {
    //     cout<< "even";
    //     exit(0);
    // }
    // else
    // {
    //     cout<<"odd";
    //     exit(0);
    // }
    if(n&1)
    {
        cout<<"odd";
    }
    else
    {
        cout<<"even";
    }

    return 0;

}