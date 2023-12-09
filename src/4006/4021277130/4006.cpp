#include<iostream>
using namespace std;
int main()
{
    int n[1000],x=0;
    for(int i=0;i<1000;i++)
    {
        cout<<"Enter The Num : ";
        cin>>n[i];
    }
    for(int j=0;j<1000;j++)
    {
        if(n[j]>0)
        {
            n[j]*=-1;
        }
        else
        {
            n[j]*=1;
        }
        x+=n[j];
    }

    cout<<"Sum Array : "<<x;

}
