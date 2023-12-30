#include<iostream>
using namespace std;
int main()
{
    int a,b,i,j,f=0;
    cout<<"Enter A: ";
    cin>>a;
    cout<<"Enter B: ";
    cin>>b;
    cout<<"The numbers is:";
    i=a+1;
    for ( i ; i < b; i++)
    {
        for ( j = 2; j < i; j++)
        {
            if (i%j==0)
            {
                f=f+1;
            }
            
        }
        if (f==0)
        {
            cout<<i<<",";
        }
        f=0;
    }
    return 0;
}
