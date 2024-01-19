#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the number: ";
    cin>>a;
    cout<<"enter the number: ";
    cin>>b;
    for (int i = 1; i <= a; i++)
    {
        if (a%i==0)
        {
            for (int j = 1; j <= b; i++)
            {
                if (b%j==0 && j==i)
                {
                    cout<<j<<endl;
                }
                
            }
            
        }
        
    }
    
}