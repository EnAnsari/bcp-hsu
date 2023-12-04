#include<iostream>
using namespace std;
int main()
{
    int temp=0,n=0,x,y=0,i=1;
    cin>>x;
    while(y==0)
    {
        n=0;
        temp=temp+i;
        for(int j=1;j<=temp;j++)
        {
            if(temp%j==0)
            {
                n++;
            }
        }
        if(x==n)
        {
            cout<<temp;
            y++;
        }
        i++;
    }
}
