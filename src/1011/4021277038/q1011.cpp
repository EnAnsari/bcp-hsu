
#include<iostream>
using namespace std;
int main()
{
    int n,max1,max2,x,s;
    cout<<"number of numbers: ";
    cin>>n;
    cout<<"enter the number: ";
    cin>>max1;
    cout<<"enter the number: ";
    cin>>max2;
    if (max2>max1)
    {
        s=max1;
        max1=max2;
        max2=s;
    }
    
    for (int i = 3; i <= n; i++)
    {
        cout<<"enter the number: ";
        cin>>x;
        if (max1<x)
        {
            max2=max1;
            max1=x;
        }
        if (x>max2 && x<max1)
        {
            max2=x;
        }
        
    }
    cout<<max2;
}