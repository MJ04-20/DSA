#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int q;

    int hashmap[256]={0};
// prestore
    for(int i=0;i<s.length();i++)
    {
        hashmap[s[i]]++;
    }
    cin>>q;
    // fetch
    while(q--)
    {
        char ch;
        cin>>ch;
        cout<<hashmap[ch]<<endl;
    }
}