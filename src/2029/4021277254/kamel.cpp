#include<iostream>
using namespace std;
int main(){
int j,i,sum,n;
cin>>n;
if(n>=2,n<=200000){
sum=0;
for(i=1;n>i;i++){
if(n%i==0) {sum=i+sum;}
}
if(sum==n){cout<<"YES";
}


else {cout<<"NO";
}
}
return 0;
}
