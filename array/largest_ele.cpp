#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // 
    // vector <int> a={2,5,1,3,0};
    // sort(a.begin(),a.end());
    // cout<< a.back();
    int a[]={2,5,1,3,0};
    int max=a[0];
    for(auto it:a)
    {
        if(max<a[it])
            max=a[it];
    }
    cout << max;
}