#include<iostream>
using namespace std;
int main()
{
    int x[50],y[50],z[50],i;
    for(i=0;i<50;i++)
    {
        cout<<"First Array : ";
        cin>>x[i];
    }
    cout<<"--------------------------";
    for(i=0;i<50;i++)
    {
        cout<<"Second Array : ";
        cin>>y[i];

        if(x[i]>=y[i])
        {
            z[i]=x[i];
        }
        else
        {
            z[i]=y[i];
        }
    }
    for(i=0;i<50;i++)
    {
        cout<<"Final Array : ";
        cout<<z[i]<<endl;
    }
}
