#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int rem(int *a,int n)
{
    int k=0;

    for(int i=0;i<n-1;i++)
    {
        if(a[i]!=a[i+1])
        {
            a[k]=a[i];
            k++;
        }
    }
    a[k]=a[n-1];
    return k+1;
}
int main()
{
     int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k=rem(a,n);
    for(int i=0;i<k;i++)
    {
        cout<<a[i]<<" ";
    }
}