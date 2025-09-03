#include <iostream>
using namespace std;
void pat4()
{
    for(int i=1;i<=5;i++)
    {
        for (int j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}
void pat7()
{
    for (int i=9;i>=1;i-=2)
    {
        for (int j=1;j<i;j+=2)
        {
            cout<<" ";
        } 
        for(int k=9;k>=i;k--)
        {
            cout<<"*";
        }
        cout << endl;
    }
}
void pat11()
{
for (int i =1;i<=4;i++)
{int j;
    for (j=1;j<=i;j++)
    {
        cout<<j;

    }
    for(int k=3;k>=i;k--)
    {
        cout<<"  ";
    }
    for (int k=j-1;k>=1;k--)
    {
        cout<<k;

    }
    cout<<endl;
}
}
void pat19()
{
    for (int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
    {
        if((i+j>=11||i+j<=3)||(i-j>=4||i-j<=-4))
        {
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
    }
}
void pat22()
{
 for(int i=0;i<8;i++)
 {
    for(int j=0;j<8;j++)
    {
        if((i==0)||(j==0)||(i==7)||j==7)
        {
            cout<<"4";
        }
        else if(((i==1)&&(j>0||j<7))||((i==6)&&(j>0||j<7))||((j==1)&&(i>0||i<7))||((j==6)&&(i>0||i<7)))
        {
            cout<<"3";
        }
        else if(((i==2)&&(j>1||j<6))||((i==5)&&(j>1||j<2))||((j==2)&&(i>1||i<6))||((j==5)&&(i>1||i<6)))
        {
            cout<<"2";
        }
        else if(((i==3)&&(j>2||j<5))||((i==4)&&(j>2||j<5))||((j==3)&&(i>2||i<5))||((j==4)&&(i>2||i<5)))
        {
            cout<<"1";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
 }   
}
int main()
{
    pat22();
    
}