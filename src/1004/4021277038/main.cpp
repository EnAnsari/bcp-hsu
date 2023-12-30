#include<iostream>
using namespace std;
int main()
{
    int a,b,c,s;
    cout<<"the watch: ";
    cin>>a;
    cout<<"minutes: ";
    cin>>b;
    cout<<"second: ";
    cin>>c;
    s=(a*3600)+(b*60)+c;
    cout<<s<<" seconds of the day pass";

return 0;
}
