#include<iostream>
using namespace std;
int main()
{
    int x,s;
    cout<<"enter the number: ";
    cin>>x;
    for (int i = 1; i <= x; i++)
    {
        if (x%i==0)
        {
            s++;
        }
        
    }
    cout<<s;
    return 0;
}