#include<iostream>
using namespace std;
int main()
{
    int n,max,x;
    cout<<"number of numbers: ";
    cin>>n;
    cout<<"enter the number: ";
    cin>>max;
    for (int i = 2; i <= n; i++)
    {
        cout<<"enter the number: ";
        cin>>x;
        if (max<x)
        {
            max=x;
        }
        
    }
    cout<<max;
}