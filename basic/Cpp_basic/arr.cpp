#include<iostream>
using namespace std;
void printarr (int array[],int size)
{
    cout<<"elements of array are\n";
   for (int i=0;i<size;i++)
    {
        cout<<array[i];
    }
}
void input(int arr[],int n)
{
    cout<<"Enter the elements of array\n";
    
    for (int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
}
int main()
{
    int size;
    cout<<"Enter the size of array\n";
    cin >> size;
    int arr[size];
    input(arr,size);
    printarr(arr,size);
    return 0;
}