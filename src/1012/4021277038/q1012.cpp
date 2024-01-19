#include<iostream>
using namespace std;
int main()
{
 int x,max,s=1;
 cout<<"enter the number: ";
 cin>>max;
 for (int i = 1; i < 10; i++)
 {
    cout<<"enter the number: ";
    cin>>x;
    if (max==x)
    {
        s=s+1;
    }
    
    if (x>max)
    {
        max=x;
        s=1;
    }
    
 }
    cout<<s;
    return 0;
}