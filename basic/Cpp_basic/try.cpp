#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,4,55};
    int size=sizeof(a)/sizeof(a[0]);
   
    cout <<sizeof(a);
    cout <<"\n"<<sizeof(a[0]);
}