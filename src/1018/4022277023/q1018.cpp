#include<iostream>
using namespace std;
int main(){
int num,temp,max=0;
cout<<"enter a number:";
cin>>num;
while(num>0){
temp=num%10;
if(max<=temp){
max=temp;
}
num/=10;
}
cout<<"max digit is:"<<max;
}
