#include <iostream>
using namespace std;
int main(){
long int n ,m;
cin >>n;
cin>>m;
long int greater , smaller;
if (m > n)
{
    greater = m;
    smaller = n;
}
else
{
    smaller = m;
    greater = n;
}
long int temp;
while (smaller != 0)
{
    temp = greater % smaller;
    greater = smaller;
    smaller = temp;
}
cout <<greater<<" "<<(m * n)/greater;
    return 0;
}
