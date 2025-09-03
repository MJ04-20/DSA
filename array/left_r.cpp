#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void rot_1(int *a,int n)
{
    int temp=a[0];
    for(int i=0;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    a[n-1]=temp;
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
    rot_1(a,n);
    // int k=rem(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}