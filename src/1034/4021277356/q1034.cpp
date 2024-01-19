#include<iostream>
using namespace std;
int main()
{
    int n,k,a[n][1],s=0,m;
    cout<<"a: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i][1];
    }
    for (int i = 1; i < n-1; i++)
    {
        if (a[i][1] > a[i+1][1] && a[i][1] < a[i-1][1] || a[i][1] < a[i+1][1] && a[i][1] > a[i-1][1] )
        {
            s++;
        }
    }
    if (s!=n-2)
    {
        cout<<"ay baba";
    }
    if (s==n-2)
    {
        cout<<"bah bah";
    }
    
}