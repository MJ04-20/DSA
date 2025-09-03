#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    // int n;
    // cin>>n;
    // int a[n];
    // set <int> s;
    // for(int i=0;i<n;i++)
    // {
    //     cin>>a[i];
    //     s.insert(a[i]);
    // }
    // if(s.size()<2)
    //     cout<<-1;
    
    // else
    // {
    //     auto it1=s.begin();
    //     cout<<*++it1<<endl;
    //     auto it2=s.end();
    //     cout<<*--(--it2)<<endl;
    // }  
    
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    // 
    int min=INT_MAX,min_2=INT_MAX,max=INT_MIN,max_2=INT_MIN;

  
        for(int i=0;i<n;i++)
        {
            if(min>a[i])
            {
                min=a[i];
            }
            if(max<a[i])
            {
                max=a[i];
            }
            
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]<min_2 && a[i]!=min)
            {
                min_2=a[i];
            }
            if(a[i]>max_2 && a[i]!=max)
            {
                max_2=a[i];
            }
        }

        cout<<"2nd min= "<<min_2<<endl;
        cout<<"2nd max= "<<max_2<<endl;
}
