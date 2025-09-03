#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int long_sum(vector<int> &nums, int k)
{
    // // int n=nums.size();
    // // int c=0;
    // // int max=0;
    // // int sum=0;
    // // for(int i=0;i<n;i++)
    // // {   c=0;
    // //     sum=0;
    // //     for(int j=i;j<n;j++)
    // //     {   
    // //         c++;
    // //         sum+=nums[j];
    // //         if(sum==k)
    // //         {
    // //             break;
                
    // //         }
    // //         if(sum>k)
    // //         {
    // //             c=0;
    // //         }
    // //     }
    // //     if(max<c)
    // //     {
    // //         max=c;
    // //     }
    // // }
    // return max;

    // 2pnt
    int n=nums.size();
    int l=0,r=0;
    int sum=nums[0];
    int maxl=0;
    while(r<n)
    {
        while(l<r && sum>k)
        {
            sum-=nums[l];
            l++;
        }
        if(sum==k)
        {
            if(maxl<(r-l +1 ))
            {
                maxl=r-l+1;
            }
        }
        r++;
        sum+=nums[r];

    }
    return maxl;

}
    int main()
    {
        int n,k;
        cin >> n;
        cin>>k;
        vector<int> nums(n);
        
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        
        }
        
        cout << long_sum(nums, k);
    }
