#include <iostream>
using namespace std;
int main(){
int f , n ,m;
cin>>n;
m=n;
for(f=1;f<n;f++){
    m = (f*m);
}
cout<<m;

}
