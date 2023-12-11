#include<iostream>
using namespace std;
int main()
{
    int x,y=0,z,c=0;
    for(int i=0;i<400;i++)
    {
        cout<<"Enter The Num : ";
        cin>>x;
        while(x!=0)
        {
            z=x%10;
            y+=z;
            x/=10;
        }
        if(y%7==0)
        {
           c++;
        }
        y=0;
    }
    cout<<"Number Of 7 : "<<c;
}
