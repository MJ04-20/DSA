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
    int min=a[0];
    int k=0;
    for(int i=0;i<n-1;i++)
    {
        min=a[i];
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<min)
            {
                min=a[j];
                k=j;
                
            }
        }
        swap(a[i],a[k]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i] << " ";
    }
}