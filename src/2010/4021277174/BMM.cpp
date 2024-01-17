#include<iostream>
using namespace std;
int main(){
    int x,n,m;
cin>>x>>n;
if(x<n){
    m=x;
    x=n;
    n=m;
}
while(n>0){
    m=n;
    n=x%n;
    x=m;
}
cout<<x;
}
