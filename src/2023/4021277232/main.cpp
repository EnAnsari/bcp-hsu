#include<iostream>
using namespace std;
void fi(int x){
for(int a=1;a<x;a++){
for(int b=a;b<x-a;b++){
int c=x-a-b;
if(a*a+b*b==c*c){
cout<<a<<" "<<b<<" "<<c<<endl;
return;
}}}
cout<<"Impossible";}
int main(){
int x;
cin>>x;
fi(x);
return 0;
}
