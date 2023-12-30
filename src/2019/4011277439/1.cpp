#include <iostream>
using namespace std;
int main(){
    int x,z,i;
    cin>>x;
    z=0;
    i=x;
  while (x > 0) {
        z = z * 10 + x % 10;
        x /= 10;
    }

    if(i==z){cout<<"yes";}
    else {cout<<"no";}

}
