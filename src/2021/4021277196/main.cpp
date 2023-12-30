#include<iostream>
using namespace std;
int tavan2(int r)
{
    r=r*r;
    return r;
}
int tavan3(int r)
{
    r=r*r*r;
    return r;
}
int main()
{
    int n,m,j=1,i=-10,p=0,s,z;
    cin>>n;cin>>m;
    for(j=1;j<=n;j++)
    {
        for(i=-10,z=0;i<=m;i++)
        {
            s=i+j;
            z=tavan3(s)/tavan2(j)+z;
        }
        p=p+z;
    }
    cout<<p;
    return 0;




}
