#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int count(int n)
{
    return ((int)(log10(n)+1));
}
// my way=optimal
int rev_num(int n)
{
    int num=0;
    while (n!=0)
    {
        num=(num*10)+(n%10);
        n=n/10;
    }
    return num;
}
bool check_pail(int n)
{
 if(rev_num(n)==n)
    {
    return true;
    }
 else 
 {
    return false;   
 }
}
int gcd(int a,int b)
{
    int gcd;
    for(int i=1;(i<=a)&&(i<=b);i++)
    {
        if((a%i==0&&b%i==0))
        {
            gcd=i;
        }
    }
    return gcd;
}
// better one
int gcd_better(int a,int b)
{
    
    for(int i=a,j=b;i>=1 && b>=1;i--,j--)
    {
        if(a%i==0 && b%i==0)
        {
            return i;
        }
    }

}
// optimal
int gcd_optimal(int a,int b)
{   
    if(a==0||b==0)
    {
        return(a|b);
    }
    else if(a>b)
    {
        gcd_optimal(a-b,b);
    }
    else{
        gcd_optimal(a,b-a);
    }
}
int armstrong(int n)
{
    int sum=0;
    int k=count(n);
    int cpy=n;
    while(cpy!=0)
    {
        sum=sum+(pow((cpy%10),k));
        cpy=cpy/10;
    }
    if (sum==n)
    {
        return true;
    }
    else 
    {
        return false;
    }
}
int main()
{
    cout<<"number of digit"<<count(55165)<<endl;
    cout<<"reverse of number"<<rev_num(15065)<<endl;
    cout<<"check palindrome "<<check_pail(15251)<<endl;
    cout<<"gcd= "<<gcd(20,15)<<endl;
    cout<<"gcd better= "<<gcd_better(20,15)<<endl;
    cout<<"gcd optimal= "<<gcd_optimal(20,15)<<endl;
    cout<<"armsstrong "<<armstrong(371)<<endl;

}    
