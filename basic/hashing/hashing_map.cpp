#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    // prestore
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++)
    {
        mpp[a[i]]++;
    }
    int q;
    cin>>q;
    // fetch
    while(q--)
    {
        int num;
        cin>>num;
        cout<<mpp[num]<<endl;
    }

}