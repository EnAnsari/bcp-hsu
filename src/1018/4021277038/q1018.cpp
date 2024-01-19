#include<iostream>
using namespace std;
int main()
{
    int x,a,max=0;
    cout<<"enter the number: ";
    cin>>x;
    while (x>0)
    {
        a=x%10;
        x=x/10;
        if (a>max)
        {
            max=a;
        }
        
    }
    cout<<max;
    return 0;
}