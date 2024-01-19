#include<iostream>
using namespace std;
int main()
{
    int a[50],b[5],s=-1,n=0;
    for (int i = 0; i < 10; i++)
    {
        cout<<"array element a: ";
        cin>>a[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<"array element b: ";
        cin>>b[i];
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (b[i]==a[j])
            {
                s=s+1;
            }
            
        }
        if (s==i)
        {
            n=n+1;
        }
        
    }
    if (n==5)
    {
        cout<<"b dar a vjod darad"; 
    }
    if (n!=5)
    {
        cout<<"nist";
    }
}