#include <iostream>
#include<bits/stdc++.h>
// #include <stdlib.h>
using namespace std;
int main ()
{
   pair<int,int> p={1,3};
   p.second=9;
   cout<<p.first<<endl;
   cout<<p.second<<endl;
   
   pair<int,pair<int,int>> p1={1,{5,6}};
   cout<<p1.first<<endl<<p1.second.first<<endl;

    pair<int,int> arr[]={{1,2},{2,4},{4,8}};
    cout << arr[2].first;
}