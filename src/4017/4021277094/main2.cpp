#include<iostream>
using namespace std;
int main(){
int i,x,r,sum=0,z=0;
for(i=1;i<=10;i++){
cin>>x;
while(x>0){
r=x%10;
sum+=r;;
x/=10;
}
if(sum%9==0)
z++;
}
cout<<z;
return 0;
}
