#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void zero_r(vector <int> &a,int n)
{
    int p1=0,p2=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            p2=i;
        }
        if(a[p1]!=0)
        {
            swap(a[p1],a[p2]);
        }
    }
}
int main()
{
    int n;
    cin>>n;
    vector <int> a;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        a.emplace_back(temp);
    }
    zero_r(a,n);
    for(auto it:a)
    {
        cout<<it<<" ";
    }
}