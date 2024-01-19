#include<iostream>
using namespace std;
int main()
{
    int a,b,s=1;
    cout<<"enter the number: ";
    cin>>a;
    cout<<"enter the number: ";
    cin>>b;
    for (int i = 1; i <= b; i++)
    {
        s=a*s;
    }
    cout<<s;
}