#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void union_(int* a,int *b,int m,int n,vector <int> &c)
{   int i;
    for( i=0;i<m;i++)
    {
            c.push_back(a[i]);
        
    }
    
    for(int j=0;j<n;j++)
    {
        c.push_back(b[j]);
    }
    

}
void rem(vector <int> &c)
{int j=0,i=0,n=c.size();
    for( i=0;i<n-1;i++)
    {
        if(c[i]!=c[i+1])
        {
            c[j]=c[i];
            j++;
        }
    }
    c[j]=c[n-1];
    for(i=j+1;i<n;i++)
    {
        c.pop_back();
    }
}
int main()
{
    int n,m;
    cin>>m;
    cin>>n;
    int b[n];
    int a[m];
    vector <int> c;
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
     union_(a,b,m,n,c);
     sort(c.begin(),c.end());
     rem(c);
    for(int i=0;i<c.size();i++)
    {
        cout<<c[i]<<" ";
    }
}