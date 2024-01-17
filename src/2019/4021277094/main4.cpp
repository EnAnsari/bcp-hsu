#include<iostream>
using namespace std;
int fact(int n){
int i=0;
while(n>0){
i=i*10+n%10;
n/=10;
}
return i;
}
int main(){
int n;
cin>>n;
int t=fact(n);
if(n==t)
cout<<"YES";
else cout<<"NO";
return 0;
}
