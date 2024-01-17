#include <iostream>
using namespace std;
int main()
{
    int n,m,i=0;
    cin>>n;
    m=n;
    while (n>0)
    {
        i=(10*i+n%10);
        n=n/10;
    }
    if(i==m)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }


    
}
