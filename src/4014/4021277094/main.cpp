#include<iostream>
using namespace std;
int main(){
int i,x,z=0,sum=0;
float avg;
for(i=1;i<=100;i++){
cin>>x;
if(x%2==0){
sum=x+sum;
z++;}
}
avg=sum/z;
cout<<avg;
return 0;
}
