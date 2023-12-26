#include<iostream>
using namespace std;
int main()
{
    int n,x,b=0,s=0,t=0;
    cout<<"Enter the number: ";
    cin>>n;
    while (n>0)
    {
        x=n%10;
        n=n/10;
        b=b+x;
    }
    for (int i = 0; i <= b; i++)
    {
        for ( n; i <= b; n++)
        {
            for (int j = 2; j < n; n++)
            {
                if (n%j==0)
                {
                    s=s+1;
                }
                
            }
            if (s==0)
            {
                t=t+1;
            }
            
        }
        if (b==t)
        {
            cout<<n;
        }
        
    }
    
    
}

