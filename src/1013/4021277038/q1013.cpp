#include<iostream>
using namespace std;
int main()
{
    int min=0,x;
    for (int i = 0; i < 100; i++)
    {
        cout<<"enter the number: ";
        cin>>x;
        if (x>min && x<12)
        {
            min=x;
        }
        
    }
    cout<<min;
    return 0;
}