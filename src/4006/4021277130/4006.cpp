#include<iostream>
#include <cmath>

using namespace std;
int main()
{
    int x[1000],a=0;
    for(int i=0;i<1000;i++)
    {
        cout<<"Enter The Num :";
        cin>>x[i];
    }
    a=x[0];
    for(int j=1;j<10000;j++)
    {
        ///Compare Between ABS(-) And ABS(+)
        if(abs(a+x[j])>=abs(a-x[j]))
        {
            a=a-x[j];
        }
        else
        {
            a+=x[j];
        }
    }
    cout<<"Final Num : "<<abs(a);
}
