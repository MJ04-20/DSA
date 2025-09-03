#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int,int> mpp;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mpp[a[i]]++;
    }
    int low=n,max=0;
    int lown=0,maxn=0;
    for(auto it:mpp)
    {
        if(it.second<low) 
        {  
            low=it.second;
            lown=it.first;
        }
        if(it.second>max)
        {   
            max=it.second;
            maxn=it.first;
    
        }
    }
    cout<<"low="<<lown<<endl;
    cout<<"max="<<maxn;
    
}