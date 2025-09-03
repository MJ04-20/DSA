#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void rot_1(int *a,int n,int d)
{
   
    int b[d];
    for(int i=0;i<d;i++)
    {
        b[i]=a[i];
    }
    for(int i=0;i<n-d;i++)
    {
        a[i]=a[i+d];
    }
    for(int i=n-d,j=0;i<n;i++,j++)
    {
        a[i]=b[j];
    }
}
void rot_r(int *a, int n, int d)
{
    

    int b[d];
    
    for (int i = 0; i < d; i++)
    {
        b[i] = a[n - d + i];
    }
    
    for (int i = n - 1; i >= d; i--)
    {
        a[i] = a[i - d];
    }
    
    for (int i = 0; i < d; i++)
    {
        a[i] = b[i];
    }
}

int main()
{
     int n;
     int d;
    cin>>n;
    cin>>d;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    d=d%n;
    if(d <n/2)
    rot_1(a,n,d);
    else
    rot_r(a,n,d);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}