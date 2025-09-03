#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void vect()
{ int x;
    vector <int> v;
    v.push_back(1);
    v.emplace_back(5);
    cout<<v.back();
    for(int i=0;i<=3;i++)
    {
        cin>>x;
        v.emplace_back(x);
    }
    
    for(vector<int>::iterator it=v.begin();it!=v.end();it++)
    {
        cout<<*it;
    }
    cout<<endl;
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<*it;
    }
    cout<<endl;
    for(auto it:v)
    {
        cout<<it;
    }
    
}
int main()
{
    vect();
}