#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void one_n(int n,int inc)
{
    if(inc<=n)
    {
        cout<<inc<<" ";
        one_n(n,inc+1);
    }
}
void n_one(int n)
{
    if(n>=1)
    {
        cout<<n<<" ";
        n_one(n-1);
    }
}
int sum(int n, int s)
{
    if(n>=1)
    {
        s=s+n;
        n=n-1;
        sum(n,s);
    }
    else
    {
        return(s);
    }
}
int fact(int n)
{
    if(n==2)
    {
        return 2;
    }
    else
    {
        return n*fact(n-1);
    }
}

void rev(int* s,int* l )
{
    if(l!=s && l>s)
    {
        swap(*l,*s);
        rev(s+1,l-1);
    }
}
 bool pali(char* s,char*l )
{
    if(s>l)
    return true;
    if(*s!=*l)
    return false;
    pali(s+1,l-1);
}
void fib(int n,int next,int pre)
{
    if(n!=0)
    {
    cout<<next<<" ";
    fib(n-1,next+pre,next);
    }
}

int main()
{
    one_n(11,1);
    cout<<endl;
    n_one(11);
    cout<<endl;
    cout<<sum(15,0)<<endl;
    cout<<fact(6)<<endl;
    int a[]={1,2,3,4,5};
    
    rev(a,a+(sizeof(a)/sizeof(int)-1));
    for(int i=0;i<=4;i++)
    {
        cout<<a[i]<<" "<<endl;
    }
    string n="abcba";
    cout<<pali(&n[0],(&n[0]+n.length()-1))<<endl;
    cout<<"1 ";
    fib(5,1,1);
}
