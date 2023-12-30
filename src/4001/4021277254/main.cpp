#include<iostream>
using namespace std;
int main(){
int i,n;
int s=0,sum=0,x=0;
for(i=1;i<=1000;i++){
cin>>n;
while(n>0){
 x=n%10;
 n=n/10;
sum=x+sum;
}
if(sum%9==0){
s++;
}
}
cout<<s;
}
