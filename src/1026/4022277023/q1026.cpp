#include<iostream>
using namespace std;
int power(int a,int b){
if(b==1)return a;
else
return a*power(a,b-1);
}
int main(){
int a,b;
cout<<"enter two number for power:";
cin>>a;
cin>>b;
cout<<"result is:"<<power(a,b);
return 0;
}
