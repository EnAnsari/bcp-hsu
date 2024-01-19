#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number: ";
    cin>>n;
    if (n<0)
    {
        cout<<n*(-1);
    }
    if (n>0)
    {
        cout<<n;
    }
    return 0;
}