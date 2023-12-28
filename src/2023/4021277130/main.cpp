#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,x=0,y=0,z=0,w;
    cin>>n;
    if(n>=1 && n<=90000)
    {
        w=n;
        for (int i = 0; i < w; i++)
        {
            for (int j = 0; j < w; j++)
            {
                w=n-(i+j);
                if(pow(w,2)==pow(i,2)+pow(j,2))
                {
                    x=i;
                    y=j;
                    z=w;
                }
            }
            
        }
        if(x!=0)
        {
            if(x>=y)
            {
                cout<<y<<" ";
                cout<<x<<" ";
                cout<<z;
            }
            else
            {
                cout<<x<<" ";
                cout<<y<<" ";
                cout<<z;
            }

        }
        else
        {
            cout<<"Impossible";
        }
    }
}